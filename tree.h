/*
 * Created by: Sangeeta Gupta
 * Objective: Tree API Header file to create a tree's node, add and remove nodes from a AVL tree
 * Created on: 24th September 2019
 * Last Modified on: 25th September 2019
 *
 */
#ifndef TREE_H
#define TREE_H

//tree node structure
typedef struct tlnode {
    struct tlnode *left;
    struct tlnode *right;
    int key;
    int height;
    int balancing_factor;
} TREENODE;

//function prototype
int max_height(TREENODE *left_node, TREENODE *right_node);

TREENODE *create_node(int key);

void pre_order(TREENODE *root);

TREENODE *right_rotate(TREENODE *treenode);

TREENODE *left_rotate(TREENODE *treenode);

int get_balancing_factor(TREENODE *current);

TREENODE *get_minimum_value_node(TREENODE *treenode);

TREENODE *delete(TREENODE *root, int key);

TREENODE *insert(TREENODE *current, TREENODE *treenode);

#endif
