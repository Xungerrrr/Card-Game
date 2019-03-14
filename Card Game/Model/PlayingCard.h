//
//  PlayingCard.h
//  Card Game
//
//  Created by Xungerrrr on 2017/5/7.
//  Copyright © 2017年 Xungerrrr. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
