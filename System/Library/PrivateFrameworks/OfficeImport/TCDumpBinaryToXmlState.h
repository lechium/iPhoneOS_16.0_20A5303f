//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpBinaryToXmlState : NSObject
{
    NSString *mCurrentFieldName;	// 8 = 0x8
    NSMutableDictionary *mFieldNameToValueMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d905c
- (id)valueForField:(id)arg1;	// IMP=0x00000000002d9036
- (id)valueForCurrentField;	// IMP=0x00000000002d901c
- (void)cacheValueforCurrentField:(id)arg1;	// IMP=0x00000000002d9001
- (void)setCurrentField:(id)arg1;	// IMP=0x00000000002d8ff0
- (id)init;	// IMP=0x00000000002d8f7c

@end

