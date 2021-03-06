//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMNode, WebFrame;

__attribute__((visibility("hidden")))
@interface DDWebKitOperation
{
    DOMNode *_startNode;	// 72 = 0x48
    int _startOffset;	// 80 = 0x50
    DOMNode *_endNode;	// 88 = 0x58
    int _endOffset;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000004ff06
@property int endOffset; // @synthesize endOffset=_endOffset;
@property(retain, nonatomic) DOMNode *endNode; // @synthesize endNode=_endNode;
@property int startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) DOMNode *startNode; // @synthesize startNode=_startNode;
- (void)dispatchContainerModificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fe2f
- (id)newOperationForContinuation;	// IMP=0x000000000004fcdc
- (id)newOperationForStartingOver;	// IMP=0x000000000004fc7c
- (_Bool)needsToStartOver;	// IMP=0x000000000004fbde
- (_Bool)containerIsReady;	// IMP=0x000000000004fb97
- (_Bool)doURLificationOnDocument;	// IMP=0x000000000004f970
- (struct __DDScanQuery *)_createScanQueryForBackend;	// IMP=0x000000000004f66c
- (void)_updateGenerationNumber;	// IMP=0x000000000004f614
- (_Bool)_rangeValidForContainer;	// IMP=0x000000000004f53d
- (void)_applyContainerRestrictionsToTypes;	// IMP=0x000000000004f4a4
- (_Bool)_containerReadyForDetection;	// IMP=0x000000000004f461
- (void)cleanup;	// IMP=0x000000000004f3aa

// Remaining properties
@property(retain, nonatomic) WebFrame *container; // @dynamic container;

@end

