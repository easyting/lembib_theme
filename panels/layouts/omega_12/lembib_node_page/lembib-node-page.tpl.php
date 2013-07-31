<div class="panel-display omega-grid lembib-node-page" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-12">
    <div class="panel-panel grid-3 alpha">
      <div class="inside"><?php print $content['left']; ?></div>
    </div>
	<div class="panel-panel grid-7">
      <div class="inside"><?php print $content['center']; ?></div>
    </div>
    <div class="panel-panel grid-2 omega">
      <div class="inside"><?php print $content['right']; ?></div>
    </div>
  </div>
</div>
