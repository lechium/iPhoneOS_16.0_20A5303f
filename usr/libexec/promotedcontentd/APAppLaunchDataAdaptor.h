//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSNumber, NSSet;

@interface APAppLaunchDataAdaptor
{
    NSSet *_bundleIDs;	// 8 = 0x8
    NSNumber *_minCount;	// 16 = 0x10
    NSMutableDictionary *_foundBundleIDs;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x00000000000029fb
- (void).cxx_destruct;	// IMP=0x00200000000033e7
@property(retain, nonatomic) NSMutableDictionary *foundBundleIDs; // @synthesize foundBundleIDs=_foundBundleIDs;
@property(retain, nonatomic) NSNumber *minCount; // @synthesize minCount=_minCount;
@property(retain, nonatomic) NSSet *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)_incrementBundleIDCount:(id)arg1;	// IMP=0x0010000000003213
- (void)eventReceived:(id)arg1;	// IMP=0x0010000000002f1f
- (id)calculateResultFromEvents;	// IMP=0x0010000000002d04
- (id)createStreamWithStartDate:(id)arg1;	// IMP=0x0010000000002c7f
- (_Bool)_validateParameters:(id *)arg1;	// IMP=0x0010000000002a08

@end

