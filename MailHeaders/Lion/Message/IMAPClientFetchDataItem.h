/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSString;

@interface IMAPClientFetchDataItem : NSObject
{
    NSString *_commandString;
}

+ (id)flagsDataItem;
+ (id)UIDDataItem;
+ (id)bodyStructureDataItem;
+ (id)internalDateDataItem;
+ (id)sizeDataItem;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(copy) NSString *commandString; // @synthesize commandString=_commandString;

@end

