//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebDelegateAction
{
    NSDictionary *_delegateData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007c708
@property(retain, nonatomic) NSDictionary *delegateData; // @synthesize delegateData=_delegateData;
- (id)_didResolveWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000007c354
- (id)_handleActionObject:(id)arg1;	// IMP=0x000000000007c1b2
- (id)_infoWithBuyParams:(id)arg1 additionalInfo:(id)arg2;	// IMP=0x000000000007c123
- (id)_handleResolveActionWithData:(id)arg1;	// IMP=0x000000000007b7ac
- (id)runAction;	// IMP=0x000000000007b200
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000007b129

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

