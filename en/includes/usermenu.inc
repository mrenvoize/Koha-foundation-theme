[% IF ( opacuserlogin ) %][% IF ( loggedinusername ) %]
  [% IF ( OPACFinesTab ) %][% IF ( accountview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-account.pl">Fines</a></li><li class="divider"></li>[% END %]
  [% IF ( userupdateview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-userupdate.pl">Personal Details</a></li><li class="divider"></li>
    [% IF ( TagsEnabled ) %][% IF ( tagsview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-tags.pl?mine=1">Tags</a></li><li class="divider"></li>[% END %]
    [% IF ( OpacPasswordChange ) %][% IF ( passwdview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-passwd.pl">Change Password</a></li><li class="divider"></li>[% END %]
  [% IF ( ShowOpacRecentSearchLink ) %]
  [% IF ( searchhistoryview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-search-history.pl">Search History</a></li><li class="divider"></li>
  [% END %]
  [% IF ( opacreadinghistory ) %]
  [% IF ( readingrecview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-readingrecord.pl">Reading History</a></li>[% IF ( OPACPrivacy ) %][% IF ( privacyview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-privacy.pl">my privacy</a></li>[% END %]<li class="divider"></li>[% END %]
  [% IF ( suggestion ) %][% UNLESS ( AnonSuggestions ) %][% IF ( suggestionsview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-suggestions.pl">Purchase Suggestions</a></li>[% END %]<li class="divider"></li>[% END %]
  [% IF ( EnhancedMessagingPreferences ) %][% IF ( messagingview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-messaging.pl">Messaging</a></li><li class="divider"></li>[% END %]
  [% IF ( virtualshelves ) %] 
  [% IF ( listsview ) %]<li class="active">[% ELSE %]<li>[% END %]<a href="/cgi-bin/koha/opac-shelves.pl?display=privateshelves">Lists</a></li><li class="divider"></li>[% END %]
  <li><a class="logout" id="logout" href="/cgi-bin/koha/opac-main.pl?logout.x=1">Log Out</a></li>
[% END %][% ELSE %][% END %]

