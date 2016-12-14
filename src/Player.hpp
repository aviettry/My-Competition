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

#include "Event.hpp"

class Event;

class Player {
  private:
    /** Player's email address. */
    std::string email;

    /** Player's name. */
    std::string name;

    /** Player's gender. */
    std::string gender;

    /** Player's shirt size. */
    std::string size;

    /** Player's phone number. */
    std::string phone;

    /** Container storing the events this player is registered for with their
     *  partners' names. 
     *
     * @type Event* The event the player is registering for.
     * @type Player* The partner in the event.
     */
    std::unordered_map<Event*, Player*> events;

    /** Comments from this player. */
    std::string comments;

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
           std::string email,
           std::string name,
           std::string gender,
           std::string size,
           std::string phone,
           std::unordered_map<Event*, Player*> events,
           std::string comments);

    /* Setters and Getters */

    /** Change the current email address.
     *
     * @param newEmail The new email address for this player.
     * @return Returns the old email address.
     */
    std::string setEmail( std::string newEmail );
    
    /** Change the current shirt size. 
     *
     * @param newSize The new size for this player.
     * @return Returns the old size.
     */
    std::string setSize( std::string newSize );

    /** Change the current phone number.
     * 
     * @param newPhone The new phone number for this player. 
     * @return Returns the old phone number.
     */
    std::string setPhoneNumber( std::string newPhone );

    /** Add singles event to events.
     *
     * @param newEvent The singles event to add for this player.
     */
    void addEvent( Event* newEvent );

    /** Add doubles event to events, Or changes the partner for current event.
     *
     * @param newEvent The new event for this player.
     * @param newPartner The partner for the event.
     * @return Returns the name of the old partner if replacing. Otherwise 
     *         returns the name of the current partner for the event.
     */
    Player* addEvent( Event* newEvent, Player* newPartner );

    /** Gets this player's name.
     *
     * @return Returns this player's name.
     */
    std::string getName();

    /** Gets this player's email.
     *
     * @return Returns this player's email.
     */
    std::string getEmail();

    /** Gets this player's shirt size.
     *
     * @return Returns this player's shirt size.
     */
    std::string getSize();

    /** Gets this player's phone number.
     *
     * @return Returns this player's phone number.
     */
    std::string getPhoneNumber();

    /** Gets this player's comments.
     *
     * @return Returns this player's comments.
     */
    std::string getComments();
    
    /** Gets this player's number of events.
     *
     * @return Returns the number of events the player is in.
     */
    int getNumEvents();

    /** Remove an event. 
     *
     * @param oldEvent The existing event to remove.
     * @return Returns true if successful, false otherwise.
     */
    bool removeEvent( Event* oldEvent );
};

#endif /* PLAYER_HPP */
