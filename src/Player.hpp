/**
 * Filename: Player.hpp
 * Authors: Ali Viettry, Martin Hung
 * Description: This class will define nodes that store all information for a
 *              player who has registered for the competition.  
 * Date of Start: 2016-12-12
 * Last Modified: 2016-12-12, Ali Viettry
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Player {
  private:
    /** Player's email address. */
    string email;

    /** Player's name. */
    string name;

    /** Player's gender. */
    string gender;

    /** Player's shirt size. */
    string size;

    /** Player's phone number. */
    string phone;

    /** Container storing the events this player is registered for with their
     *  partners' names. 
     *
     * @type string The name of the event.
     * @type string The name of the partner in the event.
     */
    unordered_map<string, string> events;

    /** Comments from this player. */
    string comments;

    /** Number of events this player signed up for. */
    int numEvents;

  public:
    /** Empty constructor for Player node. */
    Player();

    /** Constructor for all fields. 
     *
     * @param email This player's email.
     * @param name This player's name.
     * @param gender This player's gender.
     * @param size This player's shirt size.
     * @param events This player's events with partners.
     * @param comments This player's comments.
     */
    Player( 
        string email, 
        string name, 
        string gender, 
        string size, 
        string phone,
        unordered_map<string, string> events,
        string comments,
        int numEvents);

    /* Setters and Getters */

    /** Change the current email address.
     *
     * @param newEmail The new email address for this player.
     * @return Returns the old email address.
     */
    string setEmail( string newEmail );
    
    /** Change the current shirt size. 
     *
     * @param newSize The new size for this player.
     * @return Returns the old size.
     */
    string setSize( string newSize );

    /** Change the current phone number.
     * 
     * @param newPhone The new phone number for this player. 
     * @return Returns the old phone number.
     */
    string setPhoneNumber( string newPhone );

    /** Add singles event to events.
     *
     * @param newEvent The singles event to add for this player.
     */
    void setEvent( string newEvent );

    /** Add doubles event to events, Or changes the partner for current event.
     *
     * @param newEvent The new event for this player.
     * @param newPartner The partner for the event.
     * @return Returns the name of the old partner if replacing. Otherwise 
     *         returns the name of the current partner for the event.
     */
    string setEvent( string newEvent, string newPartner );

    /** Gets this player's name.
     *
     * @return Returns this player's name.
     */
    string getName();

    /** Gets this player's email.
     *
     * @return Returns this player's email.
     */
    string getEmail();

    /** Gets this player's shirt size.
     *
     * @return Returns this player's shirt size.
     */
    string getSize();

    /** Gets this player's phone number.
     *
     * @return Returns this player's phone number.
     */
    string getPhoneNumber();

    /** Gets this player's comments.
     *
     * @return Returns this player's comments.
     */
    string getComments();

    /** Remove an event. 
     *
     * @param oldEvent The existing event to remove.
     * @return Returns true if successful, false otherwise.
     */
    bool removeEvent( string oldEvent );
};

#endif /* PLAYER_HPP */
