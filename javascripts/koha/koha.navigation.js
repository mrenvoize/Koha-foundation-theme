;(function ($, window, undefined) {
  'use strict';

  $.fn.foundationNavigation = function (options) {

    var lockTopBar = false;
    // Windows Phone, sadly, does not register touch events :(
    if (Modernizr.touch || navigator.userAgent.match(/Windows Phone/i)) {
      $(document).on('click.fndtn touchstart.fndtn', '.top-bar a.flyout-toggle', function (e) {
        e.preventDefault();
        var flyout = $(this).siblings('.flyout').first();
        if (lockTopBar === false) {
          $('.top-bar .flyout').not(flyout).slideUp(500);
          flyout.slideToggle(500, function () {
            lockTopBar = false;
          });
        }
        lockTopBar = true;
      });
      $('.top-bar>li.has-flyout', this).addClass('is-touch');
    } else {
      $('.top-bar>li.has-flyout', this).on('mouseenter mouseleave', function (e) {
        if (e.type == 'mouseenter') {
          $('.top-bar').find('.flyout').hide();
          $(this).children('.flyout').show();
        }

        if (e.type == 'mouseleave') {
          var flyout = $(this).children('.flyout'),
              inputs = flyout.find('input'),
              hasFocus = function (inputs) {
                var focus;
                if (inputs.length > 0) {
                  inputs.each(function () {
                    if ($(this).is(":focus")) {
                      focus = true;
                    }
                  });
                  return focus;
                }

                return false;
              };

          if (!hasFocus(inputs)) {
            $(this).children('.flyout').hide();
          }
        }

      });
    }

  };

})( jQuery, this );
