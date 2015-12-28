<?php
/**
 * @file
 * govi_presupuesto.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_presupuesto_taxonomy_default_vocabularies() {
  return array(
    'presupuesto_periodicidad' => array(
      'name' => 'Presupuesto Periodicidad',
      'machine_name' => 'presupuesto_periodicidad',
      'description' => 'Permite clasificar los periodos en los que se publican o reportan los informes de gestión presupuestal',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
