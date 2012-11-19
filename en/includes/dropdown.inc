  <!-- Dropdown Advanced Search -->
  <div class="container" id="megaDrop">
    <div class="mobile-main-nav-padding">
      <form action="/cgi-bin/koha/opac-search.pl" method="get" class="custom">
        <div class="row top">
          <fieldset>
            <legend>Advanced Search:</legend>
            <div class="four columns">
              [% FOREACH search_box IN search_boxes_loop %]
              <div class="row">
                <div class="one columns">
                  [% IF ( search_box.boolean ) %]
                  <select style="display:none;" name="op">
                    <option value="and" selected="selected">and</option>
                    <option value="or">or</option>
                    <option value="not">not</option>
                  </select>
                  <div class="custom dropdown">
                    <a href="#" class="current">and</a>
                    <a href="#" class="selector"></a>
                    <ul>
                      <li>and</li>
                      <li>or</li>
                      <li>not</li>
                    </ul>
                  </div>
                  [% END %]
                </div>
                <div class="one columns">
                  <select name="idx">
                    <option value="kw">Keyword</option>
                    <option value="su,wrdl">Subject</option>
                    <option value="su,phr">&nbsp;&nbsp;&nbsp;&nbsp; Subject phrase</option>
                    <option value="su-br">&nbsp;&nbsp;&nbsp;&nbsp; Subject and broader terms</option>
                    <option value="su-na">&nbsp;&nbsp;&nbsp;&nbsp; Subject and narrower terms</option>
                    <option value="su-rl">&nbsp;&nbsp;&nbsp;&nbsp; Subject and related terms</option>
                    <option value="ti">Title</option>
                    <option value="ti,phr">&nbsp;&nbsp;&nbsp;&nbsp; Title phrase</option>
                    <option value="se,wrdl">Series title</option>
                    <option value="callnum">Call number</option>
                    <option value="location">Shelving location</option>
                    <option value="au,wrdl">Author</option>
                    <option value="au,phr">&nbsp;&nbsp;&nbsp;&nbsp; Author phrase</option>
                    <option value="cpn,wrdl">&nbsp;&nbsp;&nbsp;&nbsp; Corporate name</option>
                    <option value="cfn,wrdl">&nbsp;&nbsp;&nbsp;&nbsp; Conference name</option>
                    <option value="cfn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Conference name phrase</option>
                    <option value="pn,wrdl">&nbsp;&nbsp;&nbsp;&nbsp; Personal name</option>
                    <option value="pn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Personal name phrase</option>
                    <option value="nt">Notes/Comments</option>
                    <option value="pb,wrdl">Publisher</option>
                    <option value="pl,wrdl">Publisher location</option>
                    <option value="sn">Standard number</option>
                    <option value="nb">&nbsp;&nbsp;&nbsp;&nbsp; ISBN</option>
                    <option value="ns">&nbsp;&nbsp;&nbsp;&nbsp; ISSN</option>
                    <option value="lcn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Call number</option>
                    <option value="nb">ISBN</option>
                    <option value="bc">Barcode</option>
                  </select>
                  <div>
                  </div>
                </div>
                <div class="one columns">
                  <input type="text" size="30" name="q" title="Enter search terms" value="" />
                </div>
              </div>
              [% END %]
              <div class="one columns">
                <a href="JavaScript:add_field();" id="ButtonPlus" title="Add another field">[+]</a>
              </div>
            </div>
            <div class="four columns">
            </div>
            <div class="four columns">
            </div>
          </fieldset>
        </div>
      </form>
    </div>
  </div>
  <!-- End Dropdown Advanced Search -->
