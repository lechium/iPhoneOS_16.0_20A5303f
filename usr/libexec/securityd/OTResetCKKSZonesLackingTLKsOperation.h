//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTResetCKKSZonesLackingTLKsOperation
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSOperation *_finishedOp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000cb0a6
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
// Error: Property attributes should begin with the type ('T') attribute, property name: intendedState
// Property attributes: (null)

@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)resetViews:(id)arg1;	// IMP=0x00100000000cad63
- (void)proceedWithKeys:(id)arg1 incompleteKeySets:(id)arg2;	// IMP=0x00100000000ca8d3
- (void)groupStart;	// IMP=0x00100000000ca62d
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x00100000000ca567

@end

