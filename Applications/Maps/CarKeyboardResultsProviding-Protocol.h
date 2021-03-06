//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class CarKeyboardModeController, NSString;

@protocol CarKeyboardResultsProviding <NSObject, UISearchResultsUpdating>
@property(nonatomic) __weak CarKeyboardModeController *keyboardMode;
- (void)handleCancelButtonPressed;
- (void)handleSearchTextDidChange:(NSString *)arg1;
- (void)handleSearchButtonPressedWithText:(NSString *)arg1;
- (void)updateForInteractionModel:(unsigned long long)arg1;
@end

