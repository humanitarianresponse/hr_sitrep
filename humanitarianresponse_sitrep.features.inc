<?php
/**
 * @file
 * humanitarianresponse_sitrep.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_sitrep_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_sitrep_node_info() {
  $items = array(
    'hr_sitrep' => array(
      'name' => t('Situation Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}