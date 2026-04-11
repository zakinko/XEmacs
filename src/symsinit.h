/* Various initialization function prototypes.
   Copyright (C) 1995 Board of Trustees, University of Illinois.
   Copyright (C) 2001, 2002, 2005, 2010 Ben Wing.

This file is part of XEmacs.

XEmacs is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your
option) any later version.

XEmacs is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with XEmacs.  If not, see <http://www.gnu.org/licenses/>. */

/* Synched up with: Not in FSF. */

/* There is no need to put ifdefs around the prototypes here.  Extra
prototypes won't hurt anything. */

#ifndef INCLUDED_symsinit_h_
#define INCLUDED_symsinit_h_

/* Earliest environment initializations (dump-time and run-time). */

void init_alloc_very_early (void);
void init_data_very_early (void);
void init_eval_very_early (void);
void init_floatfns_very_early (void);
void init_mswindows_dde_very_early (void);
void init_process_times_very_early (void);
void init_ralloc (void);
void init_search_very_early (void);
void init_signals_very_early (void);

/* Enhanced number initialization; needs to be done both at dump time and at
   run time before pdump_load() to allow bignums and friends to be dumped and
   restored. */
void init_number (void);

/* Early Lisp-engine initialization, dump-time only. */

void init_alloc_once_early (void) ATTRIBUTE_COLD;
void init_elhash_once_early (void) ATTRIBUTE_COLD;
void init_errors_once_early (void) ATTRIBUTE_COLD;
void init_opaque_once_early (void) ATTRIBUTE_COLD;
void init_symbols_once_early (void) ATTRIBUTE_COLD;

/* Declare the built-in symbols and primitives (dump-time only). */

void syms_of_abbrev (void) ATTRIBUTE_COLD;
void syms_of_alloc (void) ATTRIBUTE_COLD;
void syms_of_array (void) ATTRIBUTE_COLD;
void syms_of_balloon_x (void) ATTRIBUTE_COLD;
void syms_of_buffer (void) ATTRIBUTE_COLD;
void syms_of_bytecode (void) ATTRIBUTE_COLD;
void syms_of_callint (void) ATTRIBUTE_COLD;
void syms_of_casefiddle (void) ATTRIBUTE_COLD;
void syms_of_casetab (void) ATTRIBUTE_COLD;
void syms_of_chartab (void) ATTRIBUTE_COLD;
void syms_of_cmdloop (void) ATTRIBUTE_COLD;
void syms_of_cmds (void) ATTRIBUTE_COLD;
void syms_of_console (void) ATTRIBUTE_COLD;
void syms_of_console_mswindows (void) ATTRIBUTE_COLD;
void syms_of_console_tty (void) ATTRIBUTE_COLD;
void syms_of_data (void) ATTRIBUTE_COLD;
void syms_of_database (void) ATTRIBUTE_COLD;
void syms_of_device (void) ATTRIBUTE_COLD;
void syms_of_device_gtk (void) ATTRIBUTE_COLD;
void syms_of_device_mswindows (void) ATTRIBUTE_COLD;
void syms_of_device_tty (void) ATTRIBUTE_COLD;
void syms_of_device_x (void) ATTRIBUTE_COLD;
void syms_of_dialog (void) ATTRIBUTE_COLD;
void syms_of_dialog_gtk (void) ATTRIBUTE_COLD;
void syms_of_dialog_mswindows (void) ATTRIBUTE_COLD;
void syms_of_dialog_x (void) ATTRIBUTE_COLD;
void syms_of_dired (void) ATTRIBUTE_COLD;
void syms_of_dired_mswindows (void) ATTRIBUTE_COLD;
void syms_of_doc (void) ATTRIBUTE_COLD;
void syms_of_doprnt (void) ATTRIBUTE_COLD;
void syms_of_dragdrop (void) ATTRIBUTE_COLD;
void syms_of_editfns (void) ATTRIBUTE_COLD;
void syms_of_elhash (void) ATTRIBUTE_COLD;
void syms_of_emacs (void) ATTRIBUTE_COLD;
void syms_of_eval (void) ATTRIBUTE_COLD;
void syms_of_event_Xt (void) ATTRIBUTE_COLD;
void syms_of_event_gtk (void) ATTRIBUTE_COLD;
void syms_of_event_mswindows (void) ATTRIBUTE_COLD;
void syms_of_event_stream (void) ATTRIBUTE_COLD;
void syms_of_events (void) ATTRIBUTE_COLD;
void syms_of_extents (void) ATTRIBUTE_COLD;
void syms_of_faces (void) ATTRIBUTE_COLD;
void syms_of_file_coding (void) ATTRIBUTE_COLD;
void syms_of_fileio (void) ATTRIBUTE_COLD;
void syms_of_filelock (void) ATTRIBUTE_COLD;
void syms_of_floatfns (void) ATTRIBUTE_COLD;
void syms_of_fns (void) ATTRIBUTE_COLD;
void syms_of_font_lock (void) ATTRIBUTE_COLD;
void syms_of_font_mgr (void) ATTRIBUTE_COLD;
void syms_of_frame (void) ATTRIBUTE_COLD;
void syms_of_frame_gtk (void) ATTRIBUTE_COLD;
void syms_of_frame_mswindows (void) ATTRIBUTE_COLD;
void syms_of_frame_tty (void) ATTRIBUTE_COLD;
void syms_of_frame_x (void) ATTRIBUTE_COLD;
void syms_of_gc (void) ATTRIBUTE_COLD;
void syms_of_general (void) ATTRIBUTE_COLD;
void syms_of_glyphs (void) ATTRIBUTE_COLD;
void syms_of_glyphs_eimage (void) ATTRIBUTE_COLD;
void syms_of_glyphs_gtk (void) ATTRIBUTE_COLD;
void syms_of_glyphs_mswindows (void) ATTRIBUTE_COLD;
void syms_of_glyphs_shared (void) ATTRIBUTE_COLD;
void syms_of_glyphs_widget (void) ATTRIBUTE_COLD;
void syms_of_glyphs_x (void) ATTRIBUTE_COLD;
void syms_of_gpmevent (void) ATTRIBUTE_COLD;
void syms_of_gui (void) ATTRIBUTE_COLD;
void syms_of_gui_gtk (void) ATTRIBUTE_COLD;
void syms_of_gui_mswindows (void) ATTRIBUTE_COLD;
void syms_of_gui_x (void) ATTRIBUTE_COLD;
void syms_of_gutter (void) ATTRIBUTE_COLD;
void syms_of_indent (void) ATTRIBUTE_COLD;
void syms_of_input_method_xlib (void) ATTRIBUTE_COLD;
void syms_of_intl (void) ATTRIBUTE_COLD;
void syms_of_intl_win32 (void) ATTRIBUTE_COLD;
void syms_of_intl_x (void) ATTRIBUTE_COLD;
void syms_of_keymap (void) ATTRIBUTE_COLD;
void syms_of_lread (void) ATTRIBUTE_COLD;
void syms_of_lstream (void) ATTRIBUTE_COLD;
void syms_of_macros (void) ATTRIBUTE_COLD;
void syms_of_marker (void) ATTRIBUTE_COLD;
void syms_of_mc_alloc (void) ATTRIBUTE_COLD;
void syms_of_md5 (void) ATTRIBUTE_COLD;
void syms_of_menubar (void) ATTRIBUTE_COLD;
void syms_of_menubar_gtk (void) ATTRIBUTE_COLD;
void syms_of_menubar_mswindows (void) ATTRIBUTE_COLD;
void syms_of_menubar_x (void) ATTRIBUTE_COLD;
void syms_of_minibuf (void) ATTRIBUTE_COLD;
void syms_of_module (void) ATTRIBUTE_COLD;
void syms_of_mule_ccl (void) ATTRIBUTE_COLD;
void syms_of_mule_charset (void) ATTRIBUTE_COLD;
void syms_of_mule_coding (void) ATTRIBUTE_COLD;
void syms_of_mule_wnn (void) ATTRIBUTE_COLD;
void syms_of_nt (void) ATTRIBUTE_COLD;
void syms_of_number (void) ATTRIBUTE_COLD;
void syms_of_fontcolor (void) ATTRIBUTE_COLD;
void syms_of_fontcolor_gtk (void) ATTRIBUTE_COLD;
void syms_of_fontcolor_mswindows (void) ATTRIBUTE_COLD;
void syms_of_fontcolor_tty (void) ATTRIBUTE_COLD;
void syms_of_fontcolor_x (void) ATTRIBUTE_COLD;
void syms_of_print (void) ATTRIBUTE_COLD;
void syms_of_process (void) ATTRIBUTE_COLD;
void syms_of_process_nt (void) ATTRIBUTE_COLD;
void syms_of_profile (void) ATTRIBUTE_COLD;
void syms_of_ralloc (void) ATTRIBUTE_COLD;
void syms_of_rangetab (void) ATTRIBUTE_COLD;
void syms_of_redisplay (void) ATTRIBUTE_COLD;
void syms_of_scrollbar (void) ATTRIBUTE_COLD;
void syms_of_scrollbar_mswindows (void) ATTRIBUTE_COLD;
void syms_of_search (void) ATTRIBUTE_COLD;
void syms_of_select (void) ATTRIBUTE_COLD;
void syms_of_select_gtk (void) ATTRIBUTE_COLD;
void syms_of_select_mswindows (void) ATTRIBUTE_COLD;
void syms_of_select_x (void) ATTRIBUTE_COLD;
void syms_of_sequence (void) ATTRIBUTE_COLD;
void syms_of_signal (void) ATTRIBUTE_COLD;
void syms_of_sound (void) ATTRIBUTE_COLD;
void syms_of_specifier (void) ATTRIBUTE_COLD;
void syms_of_sunpro (void) ATTRIBUTE_COLD;
void syms_of_symbols (void) ATTRIBUTE_COLD;
void syms_of_syntax (void) ATTRIBUTE_COLD;
void syms_of_tests (void) ATTRIBUTE_COLD;
void syms_of_text (void) ATTRIBUTE_COLD;
void syms_of_toolbar (void) ATTRIBUTE_COLD;
void syms_of_tooltalk (void) ATTRIBUTE_COLD;
void syms_of_tls (void) ATTRIBUTE_COLD;
void syms_of_ui_byhand (void) ATTRIBUTE_COLD;
void syms_of_ui_gtk (void) ATTRIBUTE_COLD;
void syms_of_undo (void) ATTRIBUTE_COLD;
void syms_of_unicode (void) ATTRIBUTE_COLD;
void syms_of_widget (void) ATTRIBUTE_COLD;
void syms_of_win32 (void) ATTRIBUTE_COLD;
void syms_of_window (void) ATTRIBUTE_COLD;

/* Initialize the console types (dump-time only). */

void console_type_create (void) ATTRIBUTE_COLD;
void console_type_create_device_gtk (void) ATTRIBUTE_COLD;
void console_type_create_device_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_device_tty (void) ATTRIBUTE_COLD;
void console_type_create_device_x (void) ATTRIBUTE_COLD;
void console_type_create_dialog_gtk (void) ATTRIBUTE_COLD;
void console_type_create_dialog_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_dialog_x (void) ATTRIBUTE_COLD;
void console_type_create_frame_gtk (void) ATTRIBUTE_COLD;
void console_type_create_frame_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_frame_tty (void) ATTRIBUTE_COLD;
void console_type_create_frame_x (void) ATTRIBUTE_COLD;
void console_type_create_glyphs_gtk (void) ATTRIBUTE_COLD;
void console_type_create_glyphs_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_glyphs_x (void) ATTRIBUTE_COLD;
void console_type_create_gtk (void) ATTRIBUTE_COLD;
void console_type_create_menubar_gtk (void) ATTRIBUTE_COLD;
void console_type_create_menubar_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_menubar_x (void) ATTRIBUTE_COLD;
void console_type_create_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_fontcolor_gtk (void) ATTRIBUTE_COLD;
void console_type_create_fontcolor_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_fontcolor_tty (void) ATTRIBUTE_COLD;
void console_type_create_fontcolor_x (void) ATTRIBUTE_COLD;
void console_type_create_redisplay_gtk (void) ATTRIBUTE_COLD;
void console_type_create_redisplay_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_redisplay_tty (void) ATTRIBUTE_COLD;
void console_type_create_redisplay_x (void) ATTRIBUTE_COLD;
void console_type_create_scrollbar_gtk (void) ATTRIBUTE_COLD;
void console_type_create_scrollbar_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_scrollbar_x (void) ATTRIBUTE_COLD;
void console_type_create_select_gtk (void) ATTRIBUTE_COLD;
void console_type_create_select_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_select_x (void) ATTRIBUTE_COLD;
void console_type_create_stream (void) ATTRIBUTE_COLD;
void console_type_create_toolbar_gtk (void) ATTRIBUTE_COLD;
void console_type_create_toolbar_mswindows (void) ATTRIBUTE_COLD;
void console_type_create_toolbar_x (void) ATTRIBUTE_COLD;
void console_type_create_tty (void) ATTRIBUTE_COLD;
void console_type_create_x (void) ATTRIBUTE_COLD;

/* Initialize the specifier types (dump-time only) */

void specifier_type_create (void) ATTRIBUTE_COLD;
void specifier_type_create_gutter (void) ATTRIBUTE_COLD;
void specifier_type_create_image (void) ATTRIBUTE_COLD;
void specifier_type_create_fontcolor (void) ATTRIBUTE_COLD;
void specifier_type_create_toolbar (void) ATTRIBUTE_COLD;

/* Initialize the coding system types (dump-time only). */
void coding_system_type_create (void) ATTRIBUTE_COLD;
void coding_system_type_create_intl_win32 (void) ATTRIBUTE_COLD;
void coding_system_type_create_mule_coding (void) ATTRIBUTE_COLD;
void coding_system_type_create_unicode (void) ATTRIBUTE_COLD;

/* Initialize the structure types (dump-time only). */

void structure_type_create (void) ATTRIBUTE_COLD;
void structure_type_create_chartab (void) ATTRIBUTE_COLD;
void structure_type_create_faces (void) ATTRIBUTE_COLD;
void structure_type_create_hash_table (void) ATTRIBUTE_COLD;
void structure_type_create_rangetab (void) ATTRIBUTE_COLD;

/* Initialize the image instantiator types (dump-time only). */

void image_instantiator_format_create (void) ATTRIBUTE_COLD;
void image_instantiator_format_create_glyphs_eimage (void) ATTRIBUTE_COLD;
void image_instantiator_format_create_glyphs_gtk (void) ATTRIBUTE_COLD;
void image_instantiator_format_create_glyphs_mswindows (void) ATTRIBUTE_COLD;
void image_instantiator_format_create_glyphs_tty (void) ATTRIBUTE_COLD;
void image_instantiator_format_create_glyphs_widget (void) ATTRIBUTE_COLD;
void image_instantiator_format_create_glyphs_x (void) ATTRIBUTE_COLD;

/* Initialize process types */

void process_type_create_nt (void) ATTRIBUTE_COLD;
void process_type_create_unix (void) ATTRIBUTE_COLD;

/* Lisp interactive function to sort groups of initialization functions by
   name, ignoring any reinit_ or init_ at the beginning.  Put the cursor
   after the last right paren, type C-x C-e, then select some text and
   M-x sort-symsinit.

   (defun sort-symsinit (start end)
     (interactive "r")
     (sort-regexp-fields nil "^.*?void \\(?:re\\)?\\(init_\\)?\\([A-Za-z0-9_]+\\).*$" "\\2"
			 start end))

*/

/* Initialize most variables (dump-time only). */

void vars_of_abbrev (void) ATTRIBUTE_COLD;
void vars_of_alloc (void) ATTRIBUTE_COLD;
void vars_of_balloon_x (void) ATTRIBUTE_COLD;
void vars_of_buffer (void) ATTRIBUTE_COLD;
void vars_of_bytecode (void) ATTRIBUTE_COLD;
void vars_of_callint (void) ATTRIBUTE_COLD;
void vars_of_casetab (void) ATTRIBUTE_COLD;
void vars_of_chartab (void) ATTRIBUTE_COLD;
void vars_of_cmdloop (void) ATTRIBUTE_COLD;
void vars_of_cmds (void) ATTRIBUTE_COLD;
void vars_of_console (void) ATTRIBUTE_COLD;
void vars_of_console_gtk (void) ATTRIBUTE_COLD;
void vars_of_console_mswindows (void) ATTRIBUTE_COLD;
void vars_of_console_stream (void) ATTRIBUTE_COLD;
void vars_of_console_tty (void) ATTRIBUTE_COLD;
void vars_of_console_x (void) ATTRIBUTE_COLD;
void vars_of_data (void) ATTRIBUTE_COLD;
void vars_of_database (void) ATTRIBUTE_COLD;
void vars_of_device (void) ATTRIBUTE_COLD;
void vars_of_device_gtk (void) ATTRIBUTE_COLD;
void vars_of_device_mswindows (void) ATTRIBUTE_COLD;
void vars_of_device_x (void) ATTRIBUTE_COLD;
void vars_of_dialog (void) ATTRIBUTE_COLD;
void vars_of_dialog_gtk (void) ATTRIBUTE_COLD;
void vars_of_dialog_mswindows (void) ATTRIBUTE_COLD;
void vars_of_dialog_x (void) ATTRIBUTE_COLD;
void vars_of_dired (void) ATTRIBUTE_COLD;
void vars_of_dired_mswindows (void) ATTRIBUTE_COLD;
void vars_of_doc (void) ATTRIBUTE_COLD;
void vars_of_dragdrop (void) ATTRIBUTE_COLD;
void vars_of_editfns (void) ATTRIBUTE_COLD;
void vars_of_elhash (void) ATTRIBUTE_COLD;
void vars_of_emacs (void) ATTRIBUTE_COLD;
void vars_of_eval (void) ATTRIBUTE_COLD;
void vars_of_event_Xt (void) ATTRIBUTE_COLD;
void vars_of_event_gtk (void) ATTRIBUTE_COLD;
void vars_of_event_mswindows (void) ATTRIBUTE_COLD;
void vars_of_event_stream (void) ATTRIBUTE_COLD;
void vars_of_event_tty (void) ATTRIBUTE_COLD;
void vars_of_events (void) ATTRIBUTE_COLD;
void vars_of_extents (void) ATTRIBUTE_COLD;
void vars_of_faces (void) ATTRIBUTE_COLD;
void vars_of_file_coding (void) ATTRIBUTE_COLD;
void vars_of_fileio (void) ATTRIBUTE_COLD;
#ifdef USE_C_FONT_LOCK
void vars_of_filelock (void) ATTRIBUTE_COLD;
#endif /* USE_C_FONT_LOCK */
void vars_of_floatfns (void) ATTRIBUTE_COLD;
void vars_of_fns (void) ATTRIBUTE_COLD;
void vars_of_font_lock (void) ATTRIBUTE_COLD;
void vars_of_font_mgr (void) ATTRIBUTE_COLD;
void vars_of_frame (void) ATTRIBUTE_COLD;
void vars_of_frame_gtk (void) ATTRIBUTE_COLD;
void vars_of_frame_mswindows (void) ATTRIBUTE_COLD;
void vars_of_frame_tty (void) ATTRIBUTE_COLD;
void vars_of_frame_x (void) ATTRIBUTE_COLD;
void vars_of_gc (void) ATTRIBUTE_COLD;
void vars_of_glyphs (void) ATTRIBUTE_COLD;
void vars_of_glyphs_eimage (void) ATTRIBUTE_COLD;
void vars_of_glyphs_gtk (void) ATTRIBUTE_COLD;
void vars_of_glyphs_mswindows (void) ATTRIBUTE_COLD;
void vars_of_glyphs_widget (void) ATTRIBUTE_COLD;
void vars_of_glyphs_x (void) ATTRIBUTE_COLD;
void vars_of_gpmevent (void) ATTRIBUTE_COLD;
void vars_of_gui (void) ATTRIBUTE_COLD;
void vars_of_gui_gtk (void) ATTRIBUTE_COLD;
void vars_of_gui_x (void) ATTRIBUTE_COLD;
void vars_of_gutter (void) ATTRIBUTE_COLD;
void vars_of_indent (void) ATTRIBUTE_COLD;
void vars_of_input_method_motif (void) ATTRIBUTE_COLD;
void vars_of_input_method_xlib (void) ATTRIBUTE_COLD;
void vars_of_insdel (void) ATTRIBUTE_COLD;
void vars_of_intl (void) ATTRIBUTE_COLD;
void vars_of_intl_win32 (void) ATTRIBUTE_COLD;
void vars_of_keymap (void) ATTRIBUTE_COLD;
void vars_of_lread (void) ATTRIBUTE_COLD;
void vars_of_lstream (void) ATTRIBUTE_COLD;
void vars_of_macros (void) ATTRIBUTE_COLD;
void vars_of_md5 (void) ATTRIBUTE_COLD;
void vars_of_menubar (void) ATTRIBUTE_COLD;
void vars_of_menubar_gtk (void) ATTRIBUTE_COLD;
void vars_of_menubar_mswindows (void) ATTRIBUTE_COLD;
void vars_of_menubar_x (void) ATTRIBUTE_COLD;
void vars_of_minibuf (void) ATTRIBUTE_COLD;
void vars_of_module (void) ATTRIBUTE_COLD;
void vars_of_mule_ccl(void) ATTRIBUTE_COLD;
void vars_of_mule_charset (void) ATTRIBUTE_COLD;
void vars_of_mule_coding (void) ATTRIBUTE_COLD;
void vars_of_mule_wnn (void) ATTRIBUTE_COLD;
void vars_of_nt (void) ATTRIBUTE_COLD;
void vars_of_number (void) ATTRIBUTE_COLD;
void vars_of_fontcolor (void) ATTRIBUTE_COLD;
void vars_of_fontcolor_gtk (void) ATTRIBUTE_COLD;
void vars_of_fontcolor_mswindows (void) ATTRIBUTE_COLD;
void vars_of_fontcolor_tty (void) ATTRIBUTE_COLD;
void vars_of_fontcolor_x (void) ATTRIBUTE_COLD;
void vars_of_print (void) ATTRIBUTE_COLD;
void vars_of_process (void) ATTRIBUTE_COLD;
void vars_of_process_nt (void) ATTRIBUTE_COLD;
void vars_of_process_unix (void) ATTRIBUTE_COLD;
void vars_of_profile (void) ATTRIBUTE_COLD;
void vars_of_ralloc (void) ATTRIBUTE_COLD;
void vars_of_realpath (void) ATTRIBUTE_COLD;
void vars_of_redisplay (void) ATTRIBUTE_COLD;
void vars_of_regex (void) ATTRIBUTE_COLD;
void vars_of_scrollbar (void) ATTRIBUTE_COLD;
void vars_of_scrollbar_gtk (void) ATTRIBUTE_COLD;
void vars_of_scrollbar_mswindows (void) ATTRIBUTE_COLD;
void vars_of_scrollbar_x (void) ATTRIBUTE_COLD;
void vars_of_search (void) ATTRIBUTE_COLD;
void vars_of_select (void) ATTRIBUTE_COLD;
void vars_of_select_gtk (void) ATTRIBUTE_COLD;
void vars_of_select_mswindows (void) ATTRIBUTE_COLD;
void vars_of_select_x (void) ATTRIBUTE_COLD;
void vars_of_sound (void) ATTRIBUTE_COLD;
void vars_of_specifier (void) ATTRIBUTE_COLD;
void vars_of_sunpro (void) ATTRIBUTE_COLD;
void vars_of_symbols (void) ATTRIBUTE_COLD;
void vars_of_syntax (void) ATTRIBUTE_COLD;
void vars_of_tests (void) ATTRIBUTE_COLD;
void vars_of_text (void) ATTRIBUTE_COLD;
void vars_of_tls (void) ATTRIBUTE_COLD;
void vars_of_toolbar (void) ATTRIBUTE_COLD;
void vars_of_toolbar_gtk (void) ATTRIBUTE_COLD;
void vars_of_tooltalk (void) ATTRIBUTE_COLD;
void vars_of_ui_gtk (void) ATTRIBUTE_COLD;
void vars_of_undo (void) ATTRIBUTE_COLD;
void vars_of_unicode (void) ATTRIBUTE_COLD;
void vars_of_win32 (void) ATTRIBUTE_COLD;
void vars_of_window (void) ATTRIBUTE_COLD;

/* Initialize specifier variables (dump-time only). */

void specifier_vars_of_glyphs (void) ATTRIBUTE_COLD;
void specifier_vars_of_glyphs_widget (void) ATTRIBUTE_COLD;
void specifier_vars_of_gutter (void) ATTRIBUTE_COLD;
void specifier_vars_of_menubar (void) ATTRIBUTE_COLD;
void specifier_vars_of_redisplay (void) ATTRIBUTE_COLD;
void specifier_vars_of_scrollbar (void) ATTRIBUTE_COLD;
void specifier_vars_of_toolbar (void) ATTRIBUTE_COLD;
void specifier_vars_of_window (void) ATTRIBUTE_COLD;

/* Initialize variables with complex dependencies on other variables
   (dump-time only). */

void complex_vars_of_alloc (void) ATTRIBUTE_COLD;
void complex_vars_of_buffer (void) ATTRIBUTE_COLD;
void complex_vars_of_casetab (void) ATTRIBUTE_COLD;
void complex_vars_of_chartab (void) ATTRIBUTE_COLD;
void complex_vars_of_console (void) ATTRIBUTE_COLD;
void complex_vars_of_emacs (void) ATTRIBUTE_COLD;
void complex_vars_of_faces (void) ATTRIBUTE_COLD;
void complex_vars_of_file_coding (void) ATTRIBUTE_COLD;
void complex_vars_of_font_mgr (void) ATTRIBUTE_COLD;
void complex_vars_of_frame (void) ATTRIBUTE_COLD;
void complex_vars_of_gc (void) ATTRIBUTE_COLD;
void complex_vars_of_glyphs (void) ATTRIBUTE_COLD;
void complex_vars_of_glyphs_gtk (void) ATTRIBUTE_COLD;
void complex_vars_of_glyphs_mswindows (void) ATTRIBUTE_COLD;
void complex_vars_of_glyphs_x (void) ATTRIBUTE_COLD;
void complex_vars_of_intl_win32 (void) ATTRIBUTE_COLD;
void complex_vars_of_intl_win32 (void) ATTRIBUTE_COLD;
void complex_vars_of_keymap (void) ATTRIBUTE_COLD;
void complex_vars_of_menubar (void) ATTRIBUTE_COLD;
void complex_vars_of_minibuf (void) ATTRIBUTE_COLD;
void complex_vars_of_mule_charset (void) ATTRIBUTE_COLD;
void complex_vars_of_mule_coding (void) ATTRIBUTE_COLD;
void complex_vars_of_scrollbar (void) ATTRIBUTE_COLD;
void complex_vars_of_syntax (void) ATTRIBUTE_COLD;
void complex_vars_of_unicode (void) ATTRIBUTE_COLD;

/* Functions that should be called after loadup.el has loaded all the Lisp
   files to be be dumped. As well as being called (indirectly) from
   #'dump-emacs, these should normally be called from within
   #'run-emacs-from-temacs. */

void disksave_finalize_mule_charset (void) ATTRIBUTE_COLD;
void disksave_finalize_mule_wnn (void) ATTRIBUTE_COLD;

/* Late initialization -- stuff pertaining only to interactive usage,
   I/O, or Lisp reading. (Dump-time and run-time, but the code itself
   may conditionalize on this by checking the `initialized' variable.) */

void init_buffer_1 (void);
void init_buffer_2 (void);
void init_console_stream (int reinit);
void init_device_tty (void);
void init_editfns (void);
void init_fileio (void);
void init_event_Xt_late (void);
void init_event_gtk_late (void);
void init_event_mswindows_late (void);
void init_event_stream (void);
void init_event_tty_late (void);
void init_event_unixoid (void);
void init_file_coding (void);
void init_hpplay (void);
void init_intl (void);
void init_intl_win32 (void);
void init_lread (void);
void init_minibuf (void);
void init_mswindows_environment (void);
void init_nt (void);
void init_redisplay (void);
void init_sunpro (void);
void init_tls (void);
void init_unicode (void);
void init_win32 (void);
void init_xemacs_process (void);

#endif /* INCLUDED_symsinit_h_ */
