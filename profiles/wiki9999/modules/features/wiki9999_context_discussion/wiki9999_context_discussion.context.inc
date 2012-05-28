<?php
/**
 * @file
 * wiki9999_context_discussion.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function wiki9999_context_discussion_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_discussion';
  $context->description = 'The discussion to a topic';
  $context->tag = 'Context, discussion';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'topic' => 'topic',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-1c37d2594be634f4d5bb1de8ac7f2ba7' => array(
          'module' => 'views',
          'delta' => '1c37d2594be634f4d5bb1de8ac7f2ba7',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-topic_opinion_default-block_1' => array(
          'module' => 'views',
          'delta' => 'topic_opinion_default-block_1',
          'region' => 'bottom_first',
          'weight' => '-10',
        ),
        'views-4981391633d6c0134e113cc484634e1b' => array(
          'module' => 'views',
          'delta' => '4981391633d6c0134e113cc484634e1b',
          'region' => 'bottom_last',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context, discussion');
  t('The discussion to a topic');
  $export['context_discussion'] = $context;

  return $export;
}
