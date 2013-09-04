<?php

class css_views_handler_filter_string extends views_handler_filter_string {
  /**
   * Implements hook_field_info_alter().
   */
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);
    $form['value']['#autocomplete_path'] = 'city/autocomplete';
  }
}