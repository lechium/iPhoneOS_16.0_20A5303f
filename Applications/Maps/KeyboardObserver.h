//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KeyboardObserver : NSObject
{
    struct CGRect _keyboardFrame;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000766ef8
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
- (void)keyboardWillOrDidChangeFrame:(id)arg1;	// IMP=0x0010000000766f4d
- (id)init;	// IMP=0x0010000000766df9

@end
