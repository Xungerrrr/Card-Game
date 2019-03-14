//
//  Card.h
//  Card Game
//
//  Created by Xungerrrr on 2017/5/7.
//  Copyright © 2017年 Xungerrrr. All rights reserved.
//

#ifndef Card_h
#define Card_h

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;

@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end

#endif /* Card_h */
