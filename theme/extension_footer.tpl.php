<?php
  global $base_url;
  if (!user_is_logged_in()) {
    $link_text = "Log in";
    $link_path = "$base_url/user/login";
  }
  else {
    $link_text = "Log out";
    $link_path = "$base_url/user/logout";
  }
?>
    <h3>Contact Info</h3>
    <p><?php print $contact; ?></p>
    <p>
      <a href="http://oregonstate.edu/copyright">Copyright</a> &copy; <?php print date("Y"); ?><br />
      <a href="http://oregonstate.edu/disclaimer">Disclaimer</a><br />
      <a href="<?php print $link_path; ?>"><?php print $link_text; ?></a>
    </p>
