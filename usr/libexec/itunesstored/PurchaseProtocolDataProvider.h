//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PurchaseProtocolDataProvider
{
    NSString *_redirectActionParameters;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000004d646
@property(copy) NSString *redirectActionParameters; // @synthesize redirectActionParameters=_redirectActionParameters;
- (_Bool)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004c208
- (_Bool)_processBuyFailuresFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004baba
- (_Bool)processDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b9d9
- (void)_performActionsForButton:(id)arg1 withDialog:(id)arg2;	// IMP=0x001000000004b908

@end

