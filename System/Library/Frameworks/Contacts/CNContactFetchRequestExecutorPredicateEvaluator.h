//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNObservable, NSString;
@protocol CNDataMapper;

__attribute__((visibility("hidden")))
@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject
{
    CNContactFetchRequest *_fetchRequest;	// 8 = 0x8
    id <CNDataMapper> _dataMapper;	// 16 = 0x10
    CNObservable *_observable;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bbb03
- (id)copyFetchRequestWithPredicate:(id)arg1;	// IMP=0x00000000000bbaa0
- (id)evaluateSubpredicate:(id)arg1;	// IMP=0x00000000000bb971
- (void)visitFalsePredicate:(id)arg1;	// IMP=0x00000000000bb938
- (void)visitTruePredicate:(id)arg1;	// IMP=0x00000000000bb924
- (void)visitNSPredicate:(id)arg1;	// IMP=0x00000000000bb577
- (void)visitNotPredicate:(id)arg1;	// IMP=0x00000000000baffd
- (void)visitAndPredicate:(id)arg1;	// IMP=0x00000000000ba9a6
- (void)visitOrPredicate:(id)arg1;	// IMP=0x00000000000ba4a3
- (void)visitNSCompoundPredicate:(id)arg1;	// IMP=0x00000000000ba450
- (void)visitCNPredicate:(id)arg1;	// IMP=0x00000000000ba3f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

