//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol PasscodeView;

@protocol PasscodeViewDelegate <NSObject>
- (void)passcodeViewCancelButtonPressed:(id <PasscodeView>)arg1;
- (void)passcodeViewPasscodeEntered:(id <PasscodeView>)arg1;
- (void)passcodeViewPasscodeDidChange:(id <PasscodeView>)arg1;
@end
