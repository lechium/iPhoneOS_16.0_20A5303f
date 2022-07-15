//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RidesharingAppPreferenceManager : NSObject
{
}

+ (id)_lastSelectionDates;	// IMP=0x00400000003de28d
+ (id)mostRecentSelectedAppIdentifers;	// IMP=0x00100000003de120
+ (void)removeRecordedAppSelectionForAppIdentifiers:(id)arg1;	// IMP=0x00100000003dded9
+ (id)preferredRideChoiceNamesByAppIdentifier;	// IMP=0x00100000003dde58
+ (void)recordRideChoice:(id)arg1;	// IMP=0x00100000003ddcfc
+ (void)recordAppSelection:(id)arg1;	// IMP=0x00100000003ddc00
+ (id)sortedRideOptionStatuses:(id)arg1 withStoreOrdering:(id)arg2;	// IMP=0x00100000003dd5ae

@end
