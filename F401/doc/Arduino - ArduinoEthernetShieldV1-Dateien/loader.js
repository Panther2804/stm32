var ArduinoGeo=ArduinoGeo||function(){var e=function(e){var t=" "+document.cookie,n=t.indexOf(" "+e+"=");if(-1===n)t=null;else{n=t.indexOf("=",n)+1;var o=t.indexOf(";",n);-1===o&&(o=t.length),t=unescape(t.substring(n,o))}return t}("georestriction_selection");return{get:function(){return e}}}(),ArduinoHeaderAndFooter=ArduinoHeaderAndFooter||function(){function e(e){return new Promise(function(t,n){var o=document.getElementsByTagName("head")[0],r=document.createElement("script");r.src=e,r.onload=r.onreadystatechange=t,r.onabort=r.onerror=n,o.appendChild(r)})}function t(e){return new Promise(function(t,n){var o=document.getElementsByTagName("head")[0],r=document.createElement("link");r.rel="stylesheet",r.href=e,r.onload=r.onreadystatechange=t,r.onabort=r.onerror=t,o.insertBefore(r,o.firstChild)})}function n(e,t){return new Promise(function(n,o){var r=i+"/"+t+"/"+e+".html";jQuery("#"+e).load(r,function(e,t,i){return"success"!==t?o("failure to inject "+r):n("imported "+r)})})}function o(e,t){var n,o,i,c,d,l=t.token;n=o=jQuery(".login-button");var f=jQuery(".logout");return e?(i=jQuery(".user-profile .userpic"),c=jQuery(".user-profile .default"),d=jQuery(".user-profile")):(o=jQuery(".login-button a"),i=jQuery(".profile img.user"),c=jQuery(".profile svg.default"),d=jQuery(".auth-required")),t.token().then(function(e){return s(e.token),r(e.token)}).then(function(e){n.hide();var t=e.public.avatar;return i.attr("src",t),c.hide(),i.show(),t||(c.show(),i.hide()),i.on("error",function(){c.show(),i.hide()}),d.show(),f.on("click",function(){sessionStorage.removeItem("oauth_redirect");var e=window.location.href;window.location.replace(a+"logout?redirect_uri="+e)}),Promise.resolve(l)}).catch(function(e){var r=t.redirectURI();return o.attr("href",r),n.show(),d.hide(),-1!==u.indexOf(window.location.hostname)&&jQuery(".main-nav").find(".cart-dropdown-trigger").show(),Promise.resolve(r)})}function r(e){return new Promise(function(t,n){jQuery.ajax({url:a+"v1/users/byID/me?scopes=public",success:function(e){t(e)},headers:{Authorization:"Bearer "+e},error:n})})}var i="https://cdn.arduino.cc/header-footer/7isbtep14i",u="https://store.arduino.cc";"usa"===ArduinoGeo.get()&&(u="https://store.arduino.cc/usa");var a="https://auth.arduino.cc/",s=function(e){jQuery.ajax({dataType:"jsonp",url:"https://forum.arduino.cc/index.php?api&pm&callback=unreadpm",headers:{Authorization:"Bearer "+e},success:function(e){jQuery(".profile .badge").html(e),e>0&&jQuery(".profile .badge").show()},error:function(e){console.error(e)}})};return function(r){var u=["header","footer","newsletter-modal"];r.parts&&(u=r.parts);var s="en";r.lang&&(s=r.lang);var c,d=-1!==u.indexOf("create-nav");return new Promise(function(t,n){return"undefined"==typeof jQuery?t(e("https://code.jquery.com/jquery-2.1.1.min.js")):t()}).then(function(){for(var e=[],t=0;t<u.length;t++)e.push(n(u[t],s));return Promise.all(e)}).then(function(){for(var e=[],n=0;n<u.length;n++)e.push(t(i+"/css/"+u[n]+".css"));return Promise.all(e)}).then(function(){for(var t=[],n=0;n<u.length;n++)t.push(e(i+"/js/"+u[n]+".js"));return"default"===r.auth&&t.push(e(i+"/login.js")),Promise.all(t)}).then(function(){return"default"===r.auth?(r.authOptions.cookieName="arduino_authenticated",r.authOptions.logoutURI||(r.authOptions.logoutURI=a+"logout"),r.authUri||(r.authUri=a+"login"),c=o(d,new Oauth2(r.authOptions))):"custom"===r.auth?c=o(d,r.authOptions):(-1!==a.indexOf(window.location.hostname)&&(c="loggedout",jQuery(".login-button").show(),jQuery(".login-button").find("a").attr("href","/login")),Promise.resolve(c))}).then(function(){return r.langSelector&&jQuery(".language-selector").show(),d?jQuery("#ino-create-nav").show():jQuery(".main-nav").show(),Promise.resolve(c)})}}();!function(){if(window&&window.addEventListener){var e,t,n=Object.create(null),o=function(){clearTimeout(t),t=setTimeout(e,100)},r=function(){},i=function(){var e;window.addEventListener("resize",o,!1),window.addEventListener("orientationchange",o,!1),window.MutationObserver?((e=new MutationObserver(o)).observe(document.documentElement,{childList:!0,subtree:!0,attributes:!0}),r=function(){try{e.disconnect(),window.removeEventListener("resize",o,!1),window.removeEventListener("orientationchange",o,!1)}catch(e){}}):(document.documentElement.addEventListener("DOMSubtreeModified",o,!1),r=function(){document.documentElement.removeEventListener("DOMSubtreeModified",o,!1),window.removeEventListener("resize",o,!1),window.removeEventListener("orientationchange",o,!1)})},u=function(e){function t(e){var t;return void 0!==e.protocol?t=e:(t=document.createElement("a"),t.href=e),t.protocol.replace(/:/g,"")+t.host}var n,o;return window.XMLHttpRequest&&(n=new XMLHttpRequest,o=t(location),e=t(e),n=void 0===n.withCredentials&&""!==e&&e!==o?XDomainRequest||void 0:XMLHttpRequest),n};e=function(){function e(){0===--h&&(r(),i())}function t(e){return function(){!0!==n[e.base]&&(e.isXlink?e.useEl.setAttributeNS("http://www.w3.org/1999/xlink","xlink:href","#"+e.hash):e.useEl.setAttribute("href","#"+e.hash))}}function o(t){return function(){t.onerror=null,t.ontimeout=null,e()}}var a,s,c,d,l,f,h=0,m=!1;for(r(),f=document.getElementsByTagName("use"),d=0;d<f.length;d+=1){try{s=f[d].getBoundingClientRect()}catch(e){s=!1}(a=f[d].getAttribute("href"))?m=!1:(a=f[d].getAttributeNS("http://www.w3.org/1999/xlink","href"),m=!0),a=(c=a&&a.split?a.split("#"):["",""])[0],c=c[1],l=s&&0===s.left&&0===s.right&&0===s.top&&0===s.bottom,s&&0===s.width&&0===s.height&&!l?a.length&&(!0!==(l=n[a])&&setTimeout(t({useEl:f[d],base:a,hash:c,isXlink:m}),0),void 0===l&&void 0!==(m=u(a))&&(l=new m,n[a]=l,l.onload=function(t){return function(){var n=document.body,o=document.createElement("x");t.onload=null,o.innerHTML=t.responseText,(o=o.getElementsByTagName("svg")[0])&&(o.setAttribute("aria-hidden","true"),o.style.position="absolute",o.style.width=0,o.style.height=0,o.style.overflow="hidden",n.insertBefore(o,n.firstChild)),e()}}(l),l.onerror=o(l),l.ontimeout=o(l),l.open("GET",a),l.send(),h+=1)):l?a.length&&n[a]&&t({useEl:f[d],base:a,hash:c})():void 0===n[a]?n[a]=!0:n[a].onload&&(n[a].abort(),delete n[a].onload,n[a]=!0)}f="",h+=1,e()},window.addEventListener("load",function n(){window.removeEventListener("load",n,!1),t=setTimeout(e,0)},!1)}}(),function(e){function t(){}function n(e,t){return function(){e.apply(t,arguments)}}function o(e){if("object"!=typeof this)throw new TypeError("Promises must be constructed via new");if("function"!=typeof e)throw new TypeError("not a function");this._state=0,this._handled=!1,this._value=void 0,this._deferreds=[],c(e,this)}function r(e,t){for(;3===e._state;)e=e._value;return 0===e._state?void e._deferreds.push(t):(e._handled=!0,void o._immediateFn(function(){var n=1===e._state?t.onFulfilled:t.onRejected;if(null!==n){var o;try{o=n(e._value)}catch(e){return void u(t.promise,e)}i(t.promise,o)}else(1===e._state?i:u)(t.promise,e._value)}))}function i(e,t){try{if(t===e)throw new TypeError("A promise cannot be resolved with itself.");if(t&&("object"==typeof t||"function"==typeof t)){var r=t.then;if(t instanceof o)return e._state=3,e._value=t,void a(e);if("function"==typeof r)return void c(n(r,t),e)}e._state=1,e._value=t,a(e)}catch(t){u(e,t)}}function u(e,t){e._state=2,e._value=t,a(e)}function a(e){2===e._state&&0===e._deferreds.length&&o._immediateFn(function(){e._handled||o._unhandledRejectionFn(e._value)});for(var t=0,n=e._deferreds.length;t<n;t++)r(e,e._deferreds[t]);e._deferreds=null}function s(e,t,n){this.onFulfilled="function"==typeof e?e:null,this.onRejected="function"==typeof t?t:null,this.promise=n}function c(e,t){var n=!1;try{e(function(e){n||(n=!0,i(t,e))},function(e){n||(n=!0,u(t,e))})}catch(e){if(n)return;n=!0,u(t,e)}}var d=setTimeout;o.prototype.catch=function(e){return this.then(null,e)},o.prototype.then=function(e,n){var o=new this.constructor(t);return r(this,new s(e,n,o)),o},o.all=function(e){var t=Array.prototype.slice.call(e);return new o(function(e,n){function o(i,u){try{if(u&&("object"==typeof u||"function"==typeof u)){var a=u.then;if("function"==typeof a)return void a.call(u,function(e){o(i,e)},n)}t[i]=u,0==--r&&e(t)}catch(e){n(e)}}if(0===t.length)return e([]);for(var r=t.length,i=0;i<t.length;i++)o(i,t[i])})},o.resolve=function(e){return e&&"object"==typeof e&&e.constructor===o?e:new o(function(t){t(e)})},o.reject=function(e){return new o(function(t,n){n(e)})},o.race=function(e){return new o(function(t,n){for(var o=0,r=e.length;o<r;o++)e[o].then(t,n)})},o._immediateFn="function"==typeof setImmediate&&function(e){setImmediate(e)}||function(e){d(e,0)},o._unhandledRejectionFn=function(e){"undefined"!=typeof console&&console&&console.warn("Possible Unhandled Promise Rejection:",e)},o._setImmediateFn=function(e){o._immediateFn=e},o._setUnhandledRejectionFn=function(e){o._unhandledRejectionFn=e},"undefined"!=typeof module&&module.exports?module.exports=o:e.Promise||(e.Promise=o)}(this);