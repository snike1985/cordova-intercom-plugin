var exec = require('cordova/exec');

var PLUGIN_NAME = 'Intercom';

var Intercom = {
    echo: function(phrase, cb) {
        exec(cb, null, PLUGIN_NAME, 'echo', [phrase]);
    }
};

module.exports = Intercom;
