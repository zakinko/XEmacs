;;; regexp-opt-tests.el --- Tests for regexp-opt.el

;; Copyright (C) 2013-2026 Free Software Foundation, Inc.

;; Author: Stefan Monnier <monnier@iro.umontreal.ca>
;; Keywords:       internal
;; Human-Keywords: internal

;; This file is part of GNU Emacs.

;; GNU Emacs is free software: you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; GNU Emacs is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GNU Emacs.  If not, see <https://www.gnu.org/licenses/>.

;;; Code:

(require 'regexp-opt)
(require 'test-harness)

(eval-when (:compile-toplevel :execute)
  (defun regexp-opt-test--permutations (l)
    "All permutations of L, assuming no duplicates."
    (if (cdr l)
	(mapcan (lambda (x)
		  (mapcar (lambda (p) (cons x p))
			  (regexp-opt-test--permutations (remove x l))))
		l)
      (list l))))

(macrolet
    ((regexp-opt-longest-match (search match &rest strings)
       (cons
	'progn
	(mapcar
	 #'(lambda (perm)
	     `(Assert (equal (and (string-match (regexp-opt ',perm)
						,search)
				  (match-string 0 ,search))
			     ,match)))
	 (regexp-opt-test--permutations strings)))))
  (regexp-opt-longest-match "abcd" "abc"
                            "a" "ab" "ac" "abc"))

(Assert (equal (regexp-opt-charset '(?a ?b ?a)) "[a-b]"))
(Assert (equal (regexp-opt-charset '(?D ?d ?B ?a ?b ?C ?7 ?a ?c ?A))
               "[a-dA-D7]"))
(Assert (equal (regexp-opt-charset '(?a)) "a"))

(Assert (equal (regexp-opt-charset '(?^)) "\\^"))
(Assert (equal (regexp-opt-charset '(?-)) "-"))
(Assert (equal (regexp-opt-charset '(?\])) "]"))
(Assert (equal (regexp-opt-charset '(?^ ?\])) "[]^]"))
(Assert (equal (regexp-opt-charset '(?^ ?-)) "[-^]"))
(Assert (equal (regexp-opt-charset '(?- ?\])) "[]-]"))
(Assert (equal (regexp-opt-charset '(?- ?\] ?^)) "[]^-]"))

(Assert (equal (regexp-opt-charset '(?^ ?a)) "[a^]"))
(Assert (equal (regexp-opt-charset '(?- ?a)) "[a-]"))
(Assert (equal (regexp-opt-charset '(?\] ?a)) "[]a]"))
(Assert (equal (regexp-opt-charset '(?^ ?\] ?a)) "[]a^]"))
(Assert (equal (regexp-opt-charset '(?^ ?- ?a)) "[a^-]"))
(Assert (equal (regexp-opt-charset '(?- ?\] ?a)) "[]a-]"))
(Assert (equal (regexp-opt-charset '(?- ?\] ?^ ?a)) "[]a^-]"))

(Assert (equal (regexp-opt-charset '()) "\\`a\\`"))

;; Basic tests from Alan Mackenzie, 2025-05-25.

(Assert (equal (regexp-opt '("foo" "bar")) "\\(?:bar\\|foo\\)"))
(Assert (equal (regexp-opt '("foo" "bar") t) "\\(bar\\|foo\\)"))
(Assert (equal (regexp-opt '("foo" "bar") 'words) "\\<\\(bar\\|foo\\)\\>"))
(Assert (equal (regexp-opt '("foo" "bar") 'symbols) "\\_<\\(bar\\|foo\\)\\_>"))

;; And this is from his cc-defs.el, cc-fix.el:

(Assert (eql (regexp-opt-depth "\\(\\(\\)\\)") 2))

;;; regexp-opt-tests.el ends here
