//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WebScriptObject.h>

@interface WebScriptObject (SUScriptAdditions)
- (id)safeValueForKey:(id)arg1;	// IMP=0x009000000006682d
- (id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2;	// IMP=0x009000000006681b
- (id)copyValuesForKeys:(id)arg1;	// IMP=0x00900000000666e7
- (id)copyJSONDataWithContext:(struct OpaqueJSContext *)arg1;	// IMP=0x0090000000066609
- (id)copyDate;	// IMP=0x00900000000665bf
- (id)copyArrayOrDictionaryWithContext:(struct OpaqueJSContext *)arg1;	// IMP=0x009000000006642c
- (id)copyArrayValueWithValidator:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x0090000000066340
@end
