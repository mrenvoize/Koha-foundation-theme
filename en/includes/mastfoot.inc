  <!-- Footer -->
  <footer style="background-color:grey;">
    <div class="row">
      <div class="twelve columns">
        <hr />
        <div class="row">
          <div class="six columns">
            <p>&copy; Copyright no one at all. Go to town.</p>
          </div>
          <div class="six columns">
            <ul class="link-list right">
              <li><a href="#">Link 1</a></li>
              <li><a href="#">Link 2</a></li>
              <li><a href="#">Link 3</a></li>
              <li><a href="#">Link 4</a></li>
            </ul>
          </div>
        </div>
      </div>
    </div>
    [% IF ( opaccredits ) %]
    <div class="row">
      <div class="twelve columns">
        [% opaccredits %]
      </div>
    </div>
    [% END %]
    [% IF ( OpacKohaUrl ) %]
    <div class="row">
      <div class="ten columns">
      [% IF ( opaclanguagesdisplay ) %][% END %]
      </div>
      <div class="two columns">
        <span>Powered by <strong><a class="koha_url" href="http://koha-community.org">Koha</a></strong></span>
      </div>
    </div>
    [% END %]

  </footer>
  <!-- End Footer -->
