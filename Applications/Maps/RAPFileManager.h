//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPFileManager : NSObject
{
}

+ (double)standardTimeToLive;	// IMP=0x00400000004d0c62
+ (id)dataAtFileURL:(id)arg1;	// IMP=0x00100000004d0bbc
+ (_Bool)haveContentsOfFilePathExpired:(id)arg1 withSuggestedRetryDate:(id)arg2 withTimeToLive:(double)arg3;	// IMP=0x00100000004d09c4
+ (_Bool)haveContentsOfFilePathExpired:(id)arg1 withSuggestedRetryDate:(id)arg2;	// IMP=0x00100000004d0947
+ (_Bool)removeAllItemsInDirectory:(id)arg1;	// IMP=0x00100000004d0788
+ (_Bool)removeItemAtFilePath:(id)arg1;	// IMP=0x00100000004d05a8
+ (unsigned long long)numberOfItemsInDirectory:(id)arg1;	// IMP=0x00100000004d0450
+ (_Bool)saveData:(id)arg1 toDirectory:(id)arg2 filename:(id)arg3;	// IMP=0x00100000004cffaf
+ (id)baseSubmissionFilePath;	// IMP=0x00100000004cff16
+ (id)baseLayoutFilePath;	// IMP=0x00100000004cfe7d
+ (id)baseFilePath:(id *)arg1;	// IMP=0x00100000004cfd69

@end

