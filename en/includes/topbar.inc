  <!-- Top Bar -->
  <div class="contain-to-grid">
  <nav class="top-bar">
    <ul>
      <!-- Title Area -->
      <li class="name">
        <h1>
          <a href="#">Koha</a>
        </h1>
      </li>
      <li class="toggle-topbar"><a href="#"></a></li>
    </ul>

    <section>
      <!-- Right Nav Section -->
      <ul class="right">
          <li class="divider"></li>
          <li><a href="#">Main Item 1</a></li>
          <li class="divider"></li>
        [% IF ( OpacNav ) %]
          <li class="has-dropdown">
            <a href="#">OpacNav</a>
            <ul class="dropdown">
              [% OpacNav %]
            </ul>
          </li>
          <li class="divider"></li>
        [% END %]
        [% IF ( opacuserlogin ) %]
          <li class="[% IF ( loggedinusername ) %]has-dropdown[% ELSE %]has-flyout[% END %]">
            [% UNLESS ( loggedinusername ) %]
              <a href="#">User</a>
              <a href="#" class="flyout-toggle"><span> </span></a>
              <!-- Login Menu -->
              <div class="flyout right" style="min-width: 600px;">
                <form action="/cgi-bin/koha/opac-user.pl" method="post" name="auth" id="auth">
                <input type="hidden" name="koha_login_context" value="opac" />
                <fieldset class="twelve columns">
                  <legend>Login</legend>
                  <div class="row" style="min-width:600px;">
                    <div class="two columns">
                      <label for="userid" class="right inline">Login:</label>
                    </div>
                    <div class="ten columns">
                      <input type="text" id="userid" name="userid" class="eight" />
                    </div>
                  </div>
                  <div class="row" style="min-width:600px;">
                    <div class="two columns">
                      <label for="password" class="right inline">Password:</label>
                    </div>
                    <div class="ten columns">
                      <input type="password" id="password" name="password" class="eight" />
                    </div>
                  </div>
                  <div class="row" style="min-width:600px;">
                    <input type="submit" value="Log In" class="small radius button float right" />
                  </div>
                </fieldset>
                </form>
              </div>
            [% END %]
            [% IF ( loggedinusername ) %]
              <a href="/cgi-bin/koha/opac-user.pl">[% FOREACH USER_INF IN USER_INFO %][% USER_INF.title %] [% USER_INF.firstname %] [% USER_INF.surname %][% END %]</a>
              <!-- Logged in Menu -->
              <ul class="dropdown">
                  [% INCLUDE usermenu.inc %]
              </ul>
            [% END %]
          </li>
        [% END %]
        <li class="divider"></li>
        <li class="search">
          <form name="searchform" method="get" action="/cgi-bin/koha/opac-search.pl" id="searchform">
            <input type="search" id="transl1" name="q">
          </form>
        </li>
        <li class="has-toggle">
          <a class="toggle-nav" href="#"></a>
        </li>
      </ul>
    </section>
  </nav>
  </div>
  <!-- End Top Bar -->
