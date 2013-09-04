<?php

function carservicesatisfaction_views_data_alter(&$data) {
  $data['location']['city']['filter'] = array(
    'handler' => 'css_views_handler_filter_string',
  );
}