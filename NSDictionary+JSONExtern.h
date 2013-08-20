
//  Created by Hunter on 13-03-16.
//  Copyright (c) 2013年 Hunter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (JSONExtern.h)
// json: return an empty string if the value is NSNull or not a string.
- (NSString *)stringForKey:(id)key;

- (NSString *)stringIntForKey:(id)key;

- (NSString *)stringDoubleValueForKey:(id) key;

- (NSString *)stringFloatForKey:(id)key;

// json: return nil if the object is NSNull or not a NSDictionary
- (NSDictionary *)dictionaryForKey:(id)key;

// json: return nil if the object is null or not a NSArray.
- (NSMutableArray *)arrayForKey:(id)key;

@end
