<?php
/**
 * @file
 * govi_presupuesto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_presupuesto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function govi_presupuesto_node_info() {
  $items = array(
    'presupuesto' => array(
      'name' => t('Presupuesto'),
      'base' => 'node_content',
      'description' => t('Utilize este tipo de contenido para gestionar la información presupuestal de su entidad'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
