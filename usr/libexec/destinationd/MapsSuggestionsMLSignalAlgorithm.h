//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsTransportModePrediction, NSString;

@interface MapsSuggestionsMLSignalAlgorithm : NSObject
{
    struct Queue _queue;	// 8 = 0x8
    MapsSuggestionsTransportModePrediction *_model;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x002000000001343c
- (void).cxx_destruct;	// IMP=0x001000000001340c
@property(readonly, nonatomic) NSString *uniqueName;
- (BOOL)transportModesForSignalPack:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012366
- (id)init;	// IMP=0x00100000000122a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

