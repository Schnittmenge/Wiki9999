<?php
/**
 * @file
 * wiki9999_base.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wiki9999_base_default_rules_configuration() {
  $items = array();
  $items['rules_discussion_auto_promote'] = entity_import('rules_config', '{ "rules_discussion_auto_promote" : {
      "LABEL" : "Discussion auto promote",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Wiki9999" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "opinion" : "opinion",
                "proposal" : "proposal",
                "standpoint" : "standpoint"
              }
            }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-promote:0" ], "value" : "[site:url-brief]" } }
      ]
    }
  }');
  return $items;
}
