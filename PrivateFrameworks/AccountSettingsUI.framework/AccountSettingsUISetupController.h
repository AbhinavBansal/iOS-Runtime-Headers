/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@interface AccountSettingsUISetupController : PSSetupController {
    unsigned int _didAlreadyPopController : 1;
    unsigned int _didAttemptFirstSyncSetup : 1;
    unsigned int _forceMailSetup : 1;
}

- (void)_reallyFinishedAccountSetup;
- (void)controller:(id)arg1 finishedSetupWithAccount:(id)arg2;
- (void)didFinishTransition;
- (void)finishedAccountSetup;
- (void)forceMailSetup;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (id)syncControllerSpecifierNamed:(id)arg1 account:(id)arg2;
- (void)updateNavButtons;

@end