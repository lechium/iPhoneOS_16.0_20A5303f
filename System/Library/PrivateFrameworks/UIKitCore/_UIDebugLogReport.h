//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIDebugLogReport : NSObject
{
    unsigned long long _currentIndentLevel;	// 8 = 0x8
    CDUnknownBlockType _fallbackMessagePrefixHandler;	// 16 = 0x10
    NSMutableArray *_statements;	// 24 = 0x18
    NSMutableArray *_prefixStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006ee978
@property(retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack; // @synthesize prefixStack=_prefixStack;
@property(retain, nonatomic, getter=_statements) NSMutableArray *statements; // @synthesize statements=_statements;
@property(copy, nonatomic) CDUnknownBlockType fallbackMessagePrefixHandler; // @synthesize fallbackMessagePrefixHandler=_fallbackMessagePrefixHandler;
@property(nonatomic) unsigned long long currentIndentLevel; // @synthesize currentIndentLevel=_currentIndentLevel;
- (void)decrementIndentLevelAndPopMessagePrefix;	// IMP=0x00000000006ee8f1
- (void)incrementIndentLevelAndPushMessagePrefix:(id)arg1;	// IMP=0x00000000006ee89f
- (id)_messagePrefixAtIndentLevel:(unsigned long long)arg1;	// IMP=0x00000000006ee722
- (void)clearAllMessagePrefixes;	// IMP=0x00000000006ee6e5
- (void)popMessagePrefix;	// IMP=0x00000000006ee6a8
- (void)pushMessagePrefixHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ee5b9
- (void)pushMessagePrefix:(id)arg1;	// IMP=0x00000000006ee4db
- (void)resetIndentLevel;	// IMP=0x00000000006ee46e
- (void)decrementIndentLevel;	// IMP=0x00000000006ee43c
- (void)incrementIndentLevel;	// IMP=0x00000000006ee40a
- (void)addLineBreak;	// IMP=0x00000000006ee38f
- (void)addMessage:(id)arg1;	// IMP=0x00000000006ee21b
- (void)addMessageWithFormat:(id)arg1;	// IMP=0x00000000006ee092
@property(readonly, nonatomic) unsigned long long messageCount;
- (id)init;	// IMP=0x00000000006edfd9

@end
