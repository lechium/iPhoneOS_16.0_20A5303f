//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;
@protocol SHJSONLCustomCatalogTransformerDelegate;

__attribute__((visibility("hidden")))
@interface SHJSONLCustomCatalogTransformer : NSObject
{
    id <SHJSONLCustomCatalogTransformerDelegate> _delegate;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDictionary *_header;	// 24 = 0x18
}

+ (id)outputFileHeader;	// IMP=0x00100000000118c4
+ (id)catalogFileRepresentationOfMediaItems:(id)arg1 withID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001156a
+ (id)catalogFileRepresentationOfSignature:(id)arg1 withID:(id)arg2;	// IMP=0x0010000000011458
+ (id)signatureFromFileRow:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000011273
+ (id)mediaItemFromFileRow:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000111cf
+ (id)headerFromFileRow:(id)arg1;	// IMP=0x00100000000111b9
+ (id)IDFromFileRow:(id)arg1;	// IMP=0x001000000001119d
+ (_Bool)objectIsSignature:(id)arg1;	// IMP=0x00100000000110a0
+ (_Bool)objectIsMediaItem:(id)arg1;	// IMP=0x0010000000010fa3
+ (_Bool)objectIsHeader:(id)arg1;	// IMP=0x0010000000010ea6
- (void).cxx_destruct;	// IMP=0x00000000000119c3
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <SHJSONLCustomCatalogTransformerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)parsedJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010b79
- (void)reset;	// IMP=0x0000000000010b47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

