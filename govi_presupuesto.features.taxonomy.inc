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
    'periodicidad' => array(
      'name' => 'Periodicidad',
      'machine_name' => 'periodicidad',
      'description' => 'Taxonomia que categoriza la periodicidad de la contratación de la Entidad',
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
    'presupuesto_clasificacion' => array(
      'name' => 'Presupuesto Clasificación',
      'machine_name' => 'presupuesto_clasificacion',
      'description' => '',
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
