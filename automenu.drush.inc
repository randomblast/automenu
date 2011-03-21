<?php

function automenu_drush_command() {
  return array(
    'automenu-rebuild' => array(
      'callback' => 'automenu_rebuild',
      'description' => dt("Insert nodes into the menu that haven't been inserted already"),
      'arguments' => array(
        'type' => 'Content type to work on',
        'limit' => 'Optional number of nodes to insert'
      ),
    ),
  );
}
