/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, UIAlertView;

@interface GKHostedAuthenticateViewController : GKHostedViewController <GKAuthenticateViewController> {
    UIAlertView *_alert;
    id _completionHandler;
    BOOL _disablesSignIn;
    NSError *_error;
    BOOL _shouldShowActiveViewController;
}

@property(retain) UIAlertView * alert;
@property(copy) id completionHandler;
@property BOOL disablesSignIn;
@property(retain) NSError * error;
@property BOOL shouldShowActiveViewController;

- (id)alert;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)completionHandler;
- (void)dealloc;
- (BOOL)disablesSignIn;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (id)error;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)hostSideViewControllerClassName;
- (id)init;
- (void)saveActiveTextField;
- (id)serviceSideViewControllerClassName;
- (void)setAlert:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDisablesSignIn:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setShouldShowActiveViewController:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldShowActiveViewController;
- (unsigned int)supportedInterfaceOrientations;

@end