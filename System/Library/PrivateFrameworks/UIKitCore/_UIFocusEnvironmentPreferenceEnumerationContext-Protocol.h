//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, _UIDebugLogStack;
@protocol UIFocusEnvironment;

@protocol _UIFocusEnvironmentPreferenceEnumerationContext <NSObject>
@property(readonly, nonatomic) _UIDebugLogStack *debugStack;
@property(readonly, nonatomic) NSArray *preferredEnvironments;
@property(readonly, nonatomic) id <UIFocusEnvironment> preferringEnvironment;
@property(readonly, nonatomic) _Bool prefersNothingFocused;
@property(readonly, nonatomic, getter=isPreferredByItself) _Bool preferredByItself;
@property(readonly, nonatomic) _Bool isLeafPreference;
@property(readonly, nonatomic) _Bool isPrimaryPreference;
@property(readonly, nonatomic) id <UIFocusEnvironment> environment;
@end
