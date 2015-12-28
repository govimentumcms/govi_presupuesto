<?php
/**
 * @file
 * govi_presupuesto.features.inc
 */

/**
 * Implements hook_views_api().
 */
function govi_presupuesto_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_presupuesto_node_info() {
  $items = array(
    'presupuesto' => array(
      'name' => t('Presupuesto'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido que permite gestionar informes, estrategias, planes, proyectos de inversión, supervisión notificación y vigilancia'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
