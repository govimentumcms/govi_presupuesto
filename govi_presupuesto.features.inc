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
