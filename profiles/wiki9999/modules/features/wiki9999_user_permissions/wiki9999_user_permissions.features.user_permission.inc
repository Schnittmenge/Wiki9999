<?php
/**
 * @file
 * wiki9999_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wiki9999_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access news feeds.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: access resource file.
  $permissions['access resource file'] = array(
    'name' => 'access resource file',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'restws',
  );

  // Exported permission: access resource i18n_translation.
  $permissions['access resource i18n_translation'] = array(
    'name' => 'access resource i18n_translation',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'restws',
  );

  // Exported permission: access resource node.
  $permissions['access resource node'] = array(
    'name' => 'access resource node',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'restws',
  );

  // Exported permission: access resource taxonomy_term.
  $permissions['access resource taxonomy_term'] = array(
    'name' => 'access resource taxonomy_term',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'restws',
  );

  // Exported permission: access resource taxonomy_vocabulary.
  $permissions['access resource taxonomy_vocabulary'] = array(
    'name' => 'access resource taxonomy_vocabulary',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'restws',
  );

  // Exported permission: access resource user.
  $permissions['access resource user'] = array(
    'name' => 'access resource user',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'restws',
  );

  // Exported permission: create opinion content.
  $permissions['create opinion content'] = array(
    'name' => 'create opinion content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create proposal content.
  $permissions['create proposal content'] = array(
    'name' => 'create proposal content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create standpoint content.
  $permissions['create standpoint content'] = array(
    'name' => 'create standpoint content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create topic content.
  $permissions['create topic content'] = array(
    'name' => 'create topic content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any proposal content.
  $permissions['edit any proposal content'] = array(
    'name' => 'edit any proposal content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any standpoint content.
  $permissions['edit any standpoint content'] = array(
    'name' => 'edit any standpoint content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own opinion content.
  $permissions['edit own opinion content'] = array(
    'name' => 'edit own opinion content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own proposal content.
  $permissions['edit own proposal content'] = array(
    'name' => 'edit own proposal content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own standpoint content.
  $permissions['edit own standpoint content'] = array(
    'name' => 'edit own standpoint content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own topic content.
  $permissions['edit own topic content'] = array(
    'name' => 'edit own topic content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
