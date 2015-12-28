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
    'normatividad_periodicidad' => array(
      'name' => 'Normatividad Periodicidad',
      'machine_name' => 'normatividad_periodicidad',
      'description' => 'Permite clasificar los periodos en los que se publican o reportan los informes',
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
