var argscheck = require('cordova/argscheck');
var channel = require('cordova/channel');
var utils = require('cordova/utils');
var exec = require('cordova/exec');
var cordova = require('cordova');

channel.createSticky('onCordovaInfoReady');
// Tell cordova channel to wait on the CordovaInfoReady event
channel.waitForInitialization('onCordovaInfoReady');

/**
 * This represents the mobile device, and provides properties for inspecting the model, version, UUID of the
 * phone, etc.
 * @constructor
 */
const PLUGIN_NAME = 'CordovaIntercomPlugin';

const CordovaIntercomPlugin =  {
    echo: function (phrase, callback) {
        exec(callback, null, PLUGIN_NAME, 'echo', [phrase]);
    },
    getData: function (callback) {
        exec(callback, null, PLUGIN_NAME, 'getData', []);
    }
};

module.exports = CordovaIntercomPlugin;
