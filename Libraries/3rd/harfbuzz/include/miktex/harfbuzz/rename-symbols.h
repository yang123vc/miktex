/* miktex/harfbuzz.rename-symbols.h:

   Copyright (C) 2018 Christian Schenk

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 2, or (at your
   option) any later version.

   This file is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this file; if not, write to the Free Software
   Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
   USA.  */

#define _hb_fallback_shape miktex_hb_fallback_shape
#define _hb_fallback_shaper_face_data_create miktex_hb_fallback_shaper_face_data_create
#define _hb_fallback_shaper_face_data_destroy miktex_hb_fallback_shaper_face_data_destroy
#define _hb_fallback_shaper_font_data_create miktex_hb_fallback_shaper_font_data_create
#define _hb_fallback_shaper_font_data_destroy miktex_hb_fallback_shaper_font_data_destroy
#define _hb_fallback_shaper_shape_plan_data_create miktex_hb_fallback_shaper_shape_plan_data_create
#define _hb_fallback_shaper_shape_plan_data_destroy miktex_hb_fallback_shaper_shape_plan_data_destroy
#define _hb_graphite2_shape miktex_hb_graphite2_shape
#define _hb_graphite2_shaper_face_data_create miktex_hb_graphite2_shaper_face_data_create
#define _hb_graphite2_shaper_face_data_destroy miktex_hb_graphite2_shaper_face_data_destroy
#define _hb_graphite2_shaper_font_data_create miktex_hb_graphite2_shaper_font_data_create
#define _hb_graphite2_shaper_font_data_destroy miktex_hb_graphite2_shaper_font_data_destroy
#define _hb_graphite2_shaper_shape_plan_data_create miktex_hb_graphite2_shaper_shape_plan_data_create
#define _hb_graphite2_shaper_shape_plan_data_destroy miktex_hb_graphite2_shaper_shape_plan_data_destroy
#define _hb_ot_shape miktex_hb_ot_shape
#define _hb_ot_shaper_face_data_create miktex_hb_ot_shaper_face_data_create
#define _hb_ot_shaper_face_data_destroy miktex_hb_ot_shaper_face_data_destroy
#define _hb_ot_shaper_font_data_create miktex_hb_ot_shaper_font_data_create
#define _hb_ot_shaper_font_data_destroy miktex_hb_ot_shaper_font_data_destroy
#define _hb_ot_shaper_shape_plan_data_create miktex_hb_ot_shaper_shape_plan_data_create
#define _hb_ot_shaper_shape_plan_data_destroy miktex_hb_ot_shaper_shape_plan_data_destroy
#define hb_blob_copy_writable_or_fail miktexhb_blob_copy_writable_or_fail
#define hb_blob_create miktex_hb_blob_create
#define hb_blob_create_from_file miktexhb_blob_create_from_file
#define hb_blob_create_sub_blob miktex_hb_blob_create_sub_blob
#define hb_blob_destroy miktex_hb_blob_destroy
#define hb_blob_get_data miktex_hb_blob_get_data
#define hb_blob_get_data_writable miktex_hb_blob_get_data_writable
#define hb_blob_get_empty miktex_hb_blob_get_empty
#define hb_blob_get_length miktex_hb_blob_get_length
#define hb_blob_get_user_data miktex_hb_blob_get_user_data
#define hb_blob_is_immutable miktex_hb_blob_is_immutable
#define hb_blob_make_immutable miktex_hb_blob_make_immutable
#define hb_blob_reference miktex_hb_blob_reference
#define hb_blob_set_user_data miktex_hb_blob_set_user_data
#define hb_buffer_add miktex_hb_buffer_add
#define hb_buffer_add_codepoints miktex_hb_buffer_add_codepoints
#define hb_buffer_add_latin1 miktex_hb_buffer_add_latin1
#define hb_buffer_add_utf16 miktex_hb_buffer_add_utf16
#define hb_buffer_add_utf32 miktex_hb_buffer_add_utf32
#define hb_buffer_add_utf8 miktex_hb_buffer_add_utf8
#define hb_buffer_allocation_successful miktex_hb_buffer_allocation_successful
#define hb_buffer_append miktex_hb_buffer_append
#define hb_buffer_clear_contents miktex_hb_buffer_clear_contents
#define hb_buffer_create miktex_hb_buffer_create
#define hb_buffer_deserialize_glyphs miktex_hb_buffer_deserialize_glyphs
#define hb_buffer_destroy miktex_hb_buffer_destroy
#define hb_buffer_diff miktex_hb_buffer_diff
#define hb_buffer_get_cluster_level miktex_hb_buffer_get_cluster_level
#define hb_buffer_get_content_type miktex_hb_buffer_get_content_type
#define hb_buffer_get_direction miktex_hb_buffer_get_direction
#define hb_buffer_get_empty miktex_hb_buffer_get_empty
#define hb_buffer_get_flags miktex_hb_buffer_get_flags
#define hb_buffer_get_glyph_infos miktex_hb_buffer_get_glyph_infos
#define hb_buffer_get_glyph_positions miktex_hb_buffer_get_glyph_positions
#define hb_buffer_get_language miktex_hb_buffer_get_language
#define hb_buffer_get_length miktex_hb_buffer_get_length
#define hb_buffer_get_replacement_codepoint miktex_hb_buffer_get_replacement_codepoint
#define hb_buffer_get_script miktex_hb_buffer_get_script
#define hb_buffer_get_segment_properties miktex_hb_buffer_get_segment_properties
#define hb_buffer_get_unicode_funcs miktex_hb_buffer_get_unicode_funcs
#define hb_buffer_get_user_data miktex_hb_buffer_get_user_data
#define hb_buffer_guess_segment_properties miktex_hb_buffer_guess_segment_properties
#define hb_buffer_normalize_glyphs miktex_hb_buffer_normalize_glyphs
#define hb_buffer_pre_allocate miktex_hb_buffer_pre_allocate
#define hb_buffer_reference miktex_hb_buffer_reference
#define hb_buffer_reset miktex_hb_buffer_reset
#define hb_buffer_reverse miktex_hb_buffer_reverse
#define hb_buffer_reverse_clusters miktex_hb_buffer_reverse_clusters
#define hb_buffer_reverse_range miktex_hb_buffer_reverse_range
#define hb_buffer_serialize_format_from_string miktex_hb_buffer_serialize_format_from_string
#define hb_buffer_serialize_format_to_string miktex_hb_buffer_serialize_format_to_string
#define hb_buffer_serialize_glyphs miktex_hb_buffer_serialize_glyphs
#define hb_buffer_serialize_list_formats miktex_hb_buffer_serialize_list_formats
#define hb_buffer_set_cluster_level miktex_hb_buffer_set_cluster_level
#define hb_buffer_set_content_type miktex_hb_buffer_set_content_type
#define hb_buffer_set_direction miktex_hb_buffer_set_direction
#define hb_buffer_set_flags miktex_hb_buffer_set_flags
#define hb_buffer_set_language miktex_hb_buffer_set_language
#define hb_buffer_set_length miktex_hb_buffer_set_length
#define hb_buffer_set_message_func miktex_hb_buffer_set_message_func
#define hb_buffer_set_replacement_codepoint miktex_hb_buffer_set_replacement_codepoint
#define hb_buffer_set_script miktex_hb_buffer_set_script
#define hb_buffer_set_segment_properties miktex_hb_buffer_set_segment_properties
#define hb_buffer_set_unicode_funcs miktex_hb_buffer_set_unicode_funcs
#define hb_buffer_set_user_data miktex_hb_buffer_set_user_data
#define hb_direction_from_string miktex_hb_direction_from_string
#define hb_direction_to_string miktex_hb_direction_to_string
#define hb_face_count miktexhb_face_count
#define hb_face_create miktex_hb_face_create
#define hb_face_create_for_tables miktex_hb_face_create_for_tables
#define hb_face_destroy miktex_hb_face_destroy
#define hb_face_get_empty miktex_hb_face_get_empty
#define hb_face_get_glyph_count miktex_hb_face_get_glyph_count
#define hb_face_get_index miktex_hb_face_get_index
#define hb_face_get_table_tags miktex_hb_face_get_table_tags
#define hb_face_get_upem miktex_hb_face_get_upem
#define hb_face_get_user_data miktex_hb_face_get_user_data
#define hb_face_is_immutable miktex_hb_face_is_immutable
#define hb_face_make_immutable miktex_hb_face_make_immutable
#define hb_face_reference miktex_hb_face_reference
#define hb_face_reference_blob miktex_hb_face_reference_blob
#define hb_face_reference_table miktex_hb_face_reference_table
#define hb_face_set_glyph_count miktex_hb_face_set_glyph_count
#define hb_face_set_index miktex_hb_face_set_index
#define hb_face_set_upem miktex_hb_face_set_upem
#define hb_face_set_user_data miktex_hb_face_set_user_data
#define hb_fallback_shaper_face_data_ensure miktex_hb_fallback_shaper_face_data_ensure
#define hb_fallback_shaper_font_data_ensure miktex_hb_fallback_shaper_font_data_ensure
#define hb_feature_from_string miktex_hb_feature_from_string
#define hb_feature_to_string miktex_hb_feature_to_string
#define hb_font_add_glyph_origin_for_direction miktex_hb_font_add_glyph_origin_for_direction
#define hb_font_create miktex_hb_font_create
#define hb_font_create_sub_font miktex_hb_font_create_sub_font
#define hb_font_destroy miktex_hb_font_destroy
#define hb_font_funcs_create miktex_hb_font_funcs_create
#define hb_font_funcs_destroy miktex_hb_font_funcs_destroy
#define hb_font_funcs_get_empty miktex_hb_font_funcs_get_empty
#define hb_font_funcs_get_user_data miktex_hb_font_funcs_get_user_data
#define hb_font_funcs_is_immutable miktex_hb_font_funcs_is_immutable
#define hb_font_funcs_make_immutable miktex_hb_font_funcs_make_immutable
#define hb_font_funcs_reference miktex_hb_font_funcs_reference
#define hb_font_funcs_set_font_h_extents_func miktex_hb_font_funcs_set_font_h_extents_func
#define hb_font_funcs_set_font_v_extents_func miktex_hb_font_funcs_set_font_v_extents_func
#define hb_font_funcs_set_glyph_contour_point_func miktex_hb_font_funcs_set_glyph_contour_point_func
#define hb_font_funcs_set_glyph_extents_func miktex_hb_font_funcs_set_glyph_extents_func
#define hb_font_funcs_set_glyph_from_name_func miktex_hb_font_funcs_set_glyph_from_name_func
#define hb_font_funcs_set_glyph_func miktex_hb_font_funcs_set_glyph_func
#define hb_font_funcs_set_glyph_h_advance_func miktex_hb_font_funcs_set_glyph_h_advance_func
#define hb_font_funcs_set_glyph_h_kerning_func miktex_hb_font_funcs_set_glyph_h_kerning_func
#define hb_font_funcs_set_glyph_h_origin_func miktex_hb_font_funcs_set_glyph_h_origin_func
#define hb_font_funcs_set_glyph_name_func miktex_hb_font_funcs_set_glyph_name_func
#define hb_font_funcs_set_glyph_v_advance_func miktex_hb_font_funcs_set_glyph_v_advance_func
#define hb_font_funcs_set_glyph_v_kerning_func miktex_hb_font_funcs_set_glyph_v_kerning_func
#define hb_font_funcs_set_glyph_v_origin_func miktex_hb_font_funcs_set_glyph_v_origin_func
#define hb_font_funcs_set_nominal_glyph_func miktex_hb_font_funcs_set_nominal_glyph_func
#define hb_font_funcs_set_user_data miktex_hb_font_funcs_set_user_data
#define hb_font_funcs_set_variation_glyph_func miktex_hb_font_funcs_set_variation_glyph_func
#define hb_font_get_empty miktex_hb_font_get_empty
#define hb_font_get_extents_for_direction miktex_hb_font_get_extents_for_direction
#define hb_font_get_face miktex_hb_font_get_face
#define hb_font_get_glyph miktex_hb_font_get_glyph
#define hb_font_get_glyph_advance_for_direction miktex_hb_font_get_glyph_advance_for_direction
#define hb_font_get_glyph_contour_point miktex_hb_font_get_glyph_contour_point
#define hb_font_get_glyph_contour_point_for_origin miktex_hb_font_get_glyph_contour_point_for_origin
#define hb_font_get_glyph_extents miktex_hb_font_get_glyph_extents
#define hb_font_get_glyph_extents_for_origin miktex_hb_font_get_glyph_extents_for_origin
#define hb_font_get_glyph_from_name miktex_hb_font_get_glyph_from_name
#define hb_font_get_glyph_h_advance miktex_hb_font_get_glyph_h_advance
#define hb_font_get_glyph_h_kerning miktex_hb_font_get_glyph_h_kerning
#define hb_font_get_glyph_h_origin miktex_hb_font_get_glyph_h_origin
#define hb_font_get_glyph_kerning_for_direction miktex_hb_font_get_glyph_kerning_for_direction
#define hb_font_get_glyph_name miktex_hb_font_get_glyph_name
#define hb_font_get_glyph_origin_for_direction miktex_hb_font_get_glyph_origin_for_direction
#define hb_font_get_glyph_v_advance miktex_hb_font_get_glyph_v_advance
#define hb_font_get_glyph_v_kerning miktex_hb_font_get_glyph_v_kerning
#define hb_font_get_glyph_v_origin miktex_hb_font_get_glyph_v_origin
#define hb_font_get_h_extents miktex_hb_font_get_h_extents
#define hb_font_get_nominal_glyph miktex_hb_font_get_nominal_glyph
#define hb_font_get_parent miktex_hb_font_get_parent
#define hb_font_get_ppem miktex_hb_font_get_ppem
#define hb_font_get_ptem miktex_hb_font_get_ptem
#define hb_font_get_scale miktex_hb_font_get_scale
#define hb_font_get_user_data miktex_hb_font_get_user_data
#define hb_font_get_v_extents miktex_hb_font_get_v_extents
#define hb_font_get_var_coords_normalized miktex_hb_font_get_var_coords_normalized
#define hb_font_get_variation_glyph miktex_hb_font_get_variation_glyph
#define hb_font_glyph_from_string miktex_hb_font_glyph_from_string
#define hb_font_glyph_to_string miktex_hb_font_glyph_to_string
#define hb_font_is_immutable miktex_hb_font_is_immutable
#define hb_font_make_immutable miktex_hb_font_make_immutable
#define hb_font_reference miktex_hb_font_reference
#define hb_font_set_face miktex_hb_font_set_face
#define hb_font_set_funcs miktex_hb_font_set_funcs
#define hb_font_set_funcs_data miktex_hb_font_set_funcs_data
#define hb_font_set_parent miktex_hb_font_set_parent
#define hb_font_set_ppem miktex_hb_font_set_ppem
#define hb_font_set_ptem miktex_hb_font_set_ptem
#define hb_font_set_scale miktex_hb_font_set_scale
#define hb_font_set_user_data miktex_hb_font_set_user_data
#define hb_font_set_var_coords_design miktex_hb_font_set_var_coords_design
#define hb_font_set_var_coords_normalized miktex_hb_font_set_var_coords_normalized
#define hb_font_set_variations miktex_hb_font_set_variations
#define hb_font_subtract_glyph_origin_for_direction miktex_hb_font_subtract_glyph_origin_for_direction
#define hb_glyph_info_get_glyph_flags miktex_hb_glyph_info_get_glyph_flags
#define hb_graphite2_face_get_gr_face miktex_hb_graphite2_face_get_gr_face
#define hb_graphite2_font_get_gr_font miktex_hb_graphite2_font_get_gr_font
#define hb_graphite2_shaper_face_data_ensure miktex_hb_graphite2_shaper_face_data_ensure
#define hb_graphite2_shaper_font_data_ensure miktex_hb_graphite2_shaper_font_data_ensure
#define hb_icu_get_unicode_funcs miktex_hb_icu_get_unicode_funcs
#define hb_icu_script_from_script miktex_hb_icu_script_from_script
#define hb_icu_script_to_script miktex_hb_icu_script_to_script
#define hb_language_from_string miktex_hb_language_from_string
#define hb_language_get_default miktex_hb_language_get_default
#define hb_language_to_string miktex_hb_language_to_string
#define hb_map_allocation_successful miktexhb_map_allocation_successful
#define hb_map_clear miktexhb_map_clear
#define hb_map_create miktexhb_map_create
#define hb_map_del miktexhb_map_del
#define hb_map_destroy miktexhb_map_destroy
#define hb_map_get miktexhb_map_get
#define hb_map_get_empty miktexhb_map_get_empty
#define hb_map_get_population miktexhb_map_get_population
#define hb_map_get_user_data miktexhb_map_get_user_data
#define hb_map_has miktexhb_map_has
#define hb_map_is_empty miktexhb_map_is_empty
#define hb_map_reference miktexhb_map_reference
#define hb_map_set miktexhb_map_set
#define hb_map_set_user_data miktexhb_map_set_user_data
#define hb_ot_font_set_funcs miktex_hb_ot_font_set_funcs
#define hb_ot_layout_collect_lookups miktex_hb_ot_layout_collect_lookups
#define hb_ot_layout_feature_get_lookups miktex_hb_ot_layout_feature_get_lookups
#define hb_ot_layout_feature_with_variations_get_lookups miktex_hb_ot_layout_feature_with_variations_get_lookups
#define hb_ot_layout_get_attach_points miktex_hb_ot_layout_get_attach_points
#define hb_ot_layout_get_glyph_class miktex_hb_ot_layout_get_glyph_class
#define hb_ot_layout_get_glyphs_in_class miktex_hb_ot_layout_get_glyphs_in_class
#define hb_ot_layout_get_ligature_carets miktex_hb_ot_layout_get_ligature_carets
#define hb_ot_layout_get_size_params miktex_hb_ot_layout_get_size_params
#define hb_ot_layout_has_glyph_classes miktex_hb_ot_layout_has_glyph_classes
#define hb_ot_layout_has_positioning miktex_hb_ot_layout_has_positioning
#define hb_ot_layout_has_substitution miktex_hb_ot_layout_has_substitution
#define hb_ot_layout_language_find_feature miktex_hb_ot_layout_language_find_feature
#define hb_ot_layout_language_get_feature_indexes miktex_hb_ot_layout_language_get_feature_indexes
#define hb_ot_layout_language_get_feature_tags miktex_hb_ot_layout_language_get_feature_tags
#define hb_ot_layout_language_get_required_feature miktex_hb_ot_layout_language_get_required_feature
#define hb_ot_layout_language_get_required_feature_index miktex_hb_ot_layout_language_get_required_feature_index
#define hb_ot_layout_lookup_collect_glyphs miktex_hb_ot_layout_lookup_collect_glyphs
#define hb_ot_layout_lookup_substitute_closure miktex_hb_ot_layout_lookup_substitute_closure
#define hb_ot_layout_lookup_would_substitute miktex_hb_ot_layout_lookup_would_substitute
#define hb_ot_layout_script_find_language miktex_hb_ot_layout_script_find_language
#define hb_ot_layout_script_get_language_tags miktex_hb_ot_layout_script_get_language_tags
#define hb_ot_layout_table_choose_script miktex_hb_ot_layout_table_choose_script
#define hb_ot_layout_table_find_feature_variations miktex_hb_ot_layout_table_find_feature_variations
#define hb_ot_layout_table_find_script miktex_hb_ot_layout_table_find_script
#define hb_ot_layout_table_get_feature_tags miktex_hb_ot_layout_table_get_feature_tags
#define hb_ot_layout_table_get_lookup_count miktex_hb_ot_layout_table_get_lookup_count
#define hb_ot_layout_table_get_script_tags miktex_hb_ot_layout_table_get_script_tags
#define hb_ot_math_get_constant miktex_hb_ot_math_get_constant
#define hb_ot_math_get_glyph_assembly miktex_hb_ot_math_get_glyph_assembly
#define hb_ot_math_get_glyph_italics_correction miktex_hb_ot_math_get_glyph_italics_correction
#define hb_ot_math_get_glyph_kerning miktex_hb_ot_math_get_glyph_kerning
#define hb_ot_math_get_glyph_top_accent_attachment miktex_hb_ot_math_get_glyph_top_accent_attachment
#define hb_ot_math_get_glyph_variants miktex_hb_ot_math_get_glyph_variants
#define hb_ot_math_get_min_connector_overlap miktex_hb_ot_math_get_min_connector_overlap
#define hb_ot_math_has_data miktex_hb_ot_math_has_data
#define hb_ot_math_is_glyph_extended_shape miktex_hb_ot_math_is_glyph_extended_shape
#define hb_ot_shape_glyphs_closure miktex_hb_ot_shape_glyphs_closure
#define hb_ot_shape_plan_collect_lookups miktex_hb_ot_shape_plan_collect_lookups
#define hb_ot_shaper_face_data_ensure miktex_hb_ot_shaper_face_data_ensure
#define hb_ot_shaper_font_data_ensure miktex_hb_ot_shaper_font_data_ensure
#define hb_ot_tag_from_language miktex_hb_ot_tag_from_language
#define hb_ot_tag_to_language miktex_hb_ot_tag_to_language
#define hb_ot_tag_to_script miktex_hb_ot_tag_to_script
#define hb_ot_tags_from_script miktex_hb_ot_tags_from_script
#define hb_ot_var_find_axis miktex_hb_ot_var_find_axis
#define hb_ot_var_get_axes miktex_hb_ot_var_get_axes
#define hb_ot_var_get_axis_count miktex_hb_ot_var_get_axis_count
#define hb_ot_var_has_data miktex_hb_ot_var_has_data
#define hb_ot_var_normalize_coords miktex_hb_ot_var_normalize_coords
#define hb_ot_var_normalize_variations miktex_hb_ot_var_normalize_variations
#define hb_script_from_iso15924_tag miktex_hb_script_from_iso15924_tag
#define hb_script_from_string miktex_hb_script_from_string
#define hb_script_get_horizontal_direction miktex_hb_script_get_horizontal_direction
#define hb_script_to_iso15924_tag miktex_hb_script_to_iso15924_tag
#define hb_segment_properties_equal miktex_hb_segment_properties_equal
#define hb_segment_properties_hash miktex_hb_segment_properties_hash
#define hb_set_add miktex_hb_set_add
#define hb_set_add_range miktex_hb_set_add_range
#define hb_set_allocation_successful miktex_hb_set_allocation_successful
#define hb_set_clear miktex_hb_set_clear
#define hb_set_create miktex_hb_set_create
#define hb_set_del miktex_hb_set_del
#define hb_set_del_range miktex_hb_set_del_range
#define hb_set_destroy miktex_hb_set_destroy
#define hb_set_get_empty miktex_hb_set_get_empty
#define hb_set_get_max miktex_hb_set_get_max
#define hb_set_get_min miktex_hb_set_get_min
#define hb_set_get_population miktex_hb_set_get_population
#define hb_set_get_user_data miktex_hb_set_get_user_data
#define hb_set_has miktex_hb_set_has
#define hb_set_intersect miktex_hb_set_intersect
#define hb_set_invert miktex_hb_set_invert
#define hb_set_is_empty miktex_hb_set_is_empty
#define hb_set_is_equal miktex_hb_set_is_equal
#define hb_set_next miktex_hb_set_next
#define hb_set_next_range miktex_hb_set_next_range
#define hb_set_previous miktexhb_set_previous
#define hb_set_previous_range miktexhb_set_previous_range
#define hb_set_reference miktex_hb_set_reference
#define hb_set_set miktex_hb_set_set
#define hb_set_set_user_data miktex_hb_set_set_user_data
#define hb_set_subtract miktex_hb_set_subtract
#define hb_set_symmetric_difference miktex_hb_set_symmetric_difference
#define hb_set_union miktex_hb_set_union
#define hb_shape miktex_hb_shape
#define hb_shape_full miktex_hb_shape_full
#define hb_shape_list_shapers miktex_hb_shape_list_shapers
#define hb_shape_plan_create miktex_hb_shape_plan_create
#define hb_shape_plan_create2 miktex_hb_shape_plan_create2
#define hb_shape_plan_create_cached miktex_hb_shape_plan_create_cached
#define hb_shape_plan_create_cached2 miktex_hb_shape_plan_create_cached2
#define hb_shape_plan_destroy miktex_hb_shape_plan_destroy
#define hb_shape_plan_execute miktex_hb_shape_plan_execute
#define hb_shape_plan_get_empty miktex_hb_shape_plan_get_empty
#define hb_shape_plan_get_shaper miktex_hb_shape_plan_get_shaper
#define hb_shape_plan_get_user_data miktex_hb_shape_plan_get_user_data
#define hb_shape_plan_reference miktex_hb_shape_plan_reference
#define hb_shape_plan_set_user_data miktex_hb_shape_plan_set_user_data
#define hb_tag_from_string miktex_hb_tag_from_string
#define hb_tag_to_string miktex_hb_tag_to_string
#define hb_unicode_combining_class miktex_hb_unicode_combining_class
#define hb_unicode_compose miktex_hb_unicode_compose
#define hb_unicode_decompose miktex_hb_unicode_decompose
#define hb_unicode_decompose_compatibility miktex_hb_unicode_decompose_compatibility
#define hb_unicode_eastasian_width miktex_hb_unicode_eastasian_width
#define hb_unicode_funcs_create miktex_hb_unicode_funcs_create
#define hb_unicode_funcs_destroy miktex_hb_unicode_funcs_destroy
#define hb_unicode_funcs_get_default miktex_hb_unicode_funcs_get_default
#define hb_unicode_funcs_get_empty miktex_hb_unicode_funcs_get_empty
#define hb_unicode_funcs_get_parent miktex_hb_unicode_funcs_get_parent
#define hb_unicode_funcs_get_user_data miktex_hb_unicode_funcs_get_user_data
#define hb_unicode_funcs_is_immutable miktex_hb_unicode_funcs_is_immutable
#define hb_unicode_funcs_make_immutable miktex_hb_unicode_funcs_make_immutable
#define hb_unicode_funcs_reference miktex_hb_unicode_funcs_reference
#define hb_unicode_funcs_set_combining_class_func miktex_hb_unicode_funcs_set_combining_class_func
#define hb_unicode_funcs_set_compose_func miktex_hb_unicode_funcs_set_compose_func
#define hb_unicode_funcs_set_decompose_compatibility_func miktex_hb_unicode_funcs_set_decompose_compatibility_func
#define hb_unicode_funcs_set_decompose_func miktex_hb_unicode_funcs_set_decompose_func
#define hb_unicode_funcs_set_eastasian_width_func miktex_hb_unicode_funcs_set_eastasian_width_func
#define hb_unicode_funcs_set_general_category_func miktex_hb_unicode_funcs_set_general_category_func
#define hb_unicode_funcs_set_mirroring_func miktex_hb_unicode_funcs_set_mirroring_func
#define hb_unicode_funcs_set_script_func miktex_hb_unicode_funcs_set_script_func
#define hb_unicode_funcs_set_user_data miktex_hb_unicode_funcs_set_user_data
#define hb_unicode_general_category miktex_hb_unicode_general_category
#define hb_unicode_mirroring miktex_hb_unicode_mirroring
#define hb_unicode_script miktex_hb_unicode_script
#define hb_variation_from_string miktex_hb_variation_from_string
#define hb_variation_to_string miktex_hb_variation_to_string
#define hb_version miktex_hb_version
#define hb_version_atleast miktex_hb_version_atleast
#define hb_version_string miktex_hb_version_string
