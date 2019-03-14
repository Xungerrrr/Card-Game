//
//  Card+Deck.h
//  Card Game
//
//  Created by Xungerrrr on 2017/5/7.
//  Copyright © 2017年 Xungerrrr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
