<div class="panel-display omega-grid lembib-frontpage" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-12">
    <div class="inside"><?php print $content['top_wide']; ?></div>
  </div>
  <div class="panel-panel grid-12">
    <div class="panel-panel grid-8 alpha">
      <div class="inside"><?php print $content['left_large']; ?></div>
    </div>
    <div class="panel-panel grid-4 omega">
      <div class="inside"><?php print $content['right_small']; ?></div>
    </div>
  </div>
</div>
